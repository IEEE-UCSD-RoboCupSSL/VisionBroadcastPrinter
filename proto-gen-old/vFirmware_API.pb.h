// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vFirmware_API.proto

#ifndef PROTOBUF_INCLUDED_vFirmware_5fAPI_2eproto
#define PROTOBUF_INCLUDED_vFirmware_5fAPI_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_vFirmware_5fAPI_2eproto 

namespace protobuf_vFirmware_5fAPI_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_vFirmware_5fAPI_2eproto
class VF_Commands;
class VF_CommandsDefaultTypeInternal;
extern VF_CommandsDefaultTypeInternal _VF_Commands_default_instance_;
class VF_Data;
class VF_DataDefaultTypeInternal;
extern VF_DataDefaultTypeInternal _VF_Data_default_instance_;
class Vec_2D;
class Vec_2DDefaultTypeInternal;
extern Vec_2DDefaultTypeInternal _Vec_2D_default_instance_;
namespace google {
namespace protobuf {
template<> ::VF_Commands* Arena::CreateMaybeMessage<::VF_Commands>(Arena*);
template<> ::VF_Data* Arena::CreateMaybeMessage<::VF_Data>(Arena*);
template<> ::Vec_2D* Arena::CreateMaybeMessage<::Vec_2D>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class Vec_2D : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Vec_2D) */ {
 public:
  Vec_2D();
  virtual ~Vec_2D();

  Vec_2D(const Vec_2D& from);

  inline Vec_2D& operator=(const Vec_2D& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Vec_2D(Vec_2D&& from) noexcept
    : Vec_2D() {
    *this = ::std::move(from);
  }

  inline Vec_2D& operator=(Vec_2D&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const Vec_2D& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vec_2D* internal_default_instance() {
    return reinterpret_cast<const Vec_2D*>(
               &_Vec_2D_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Vec_2D* other);
  friend void swap(Vec_2D& a, Vec_2D& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Vec_2D* New() const final {
    return CreateMaybeMessage<Vec_2D>(NULL);
  }

  Vec_2D* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Vec_2D>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Vec_2D& from);
  void MergeFrom(const Vec_2D& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vec_2D* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:Vec_2D)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_vFirmware_5fAPI_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class VF_Commands : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VF_Commands) */ {
 public:
  VF_Commands();
  virtual ~VF_Commands();

  VF_Commands(const VF_Commands& from);

  inline VF_Commands& operator=(const VF_Commands& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VF_Commands(VF_Commands&& from) noexcept
    : VF_Commands() {
    *this = ::std::move(from);
  }

  inline VF_Commands& operator=(VF_Commands&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VF_Commands& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VF_Commands* internal_default_instance() {
    return reinterpret_cast<const VF_Commands*>(
               &_VF_Commands_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(VF_Commands* other);
  friend void swap(VF_Commands& a, VF_Commands& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VF_Commands* New() const final {
    return CreateMaybeMessage<VF_Commands>(NULL);
  }

  VF_Commands* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VF_Commands>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VF_Commands& from);
  void MergeFrom(const VF_Commands& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VF_Commands* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Vec_2D translational_output = 2;
  bool has_translational_output() const;
  void clear_translational_output();
  static const int kTranslationalOutputFieldNumber = 2;
  private:
  const ::Vec_2D& _internal_translational_output() const;
  public:
  const ::Vec_2D& translational_output() const;
  ::Vec_2D* release_translational_output();
  ::Vec_2D* mutable_translational_output();
  void set_allocated_translational_output(::Vec_2D* translational_output);

  // .Vec_2D kicker = 4;
  bool has_kicker() const;
  void clear_kicker();
  static const int kKickerFieldNumber = 4;
  private:
  const ::Vec_2D& _internal_kicker() const;
  public:
  const ::Vec_2D& kicker() const;
  ::Vec_2D* release_kicker();
  ::Vec_2D* mutable_kicker();
  void set_allocated_kicker(::Vec_2D* kicker);

  // float rotational_output = 3;
  void clear_rotational_output();
  static const int kRotationalOutputFieldNumber = 3;
  float rotational_output() const;
  void set_rotational_output(float value);

  // bool init = 1;
  void clear_init();
  static const int kInitFieldNumber = 1;
  bool init() const;
  void set_init(bool value);

  // bool dribbler = 5;
  void clear_dribbler();
  static const int kDribblerFieldNumber = 5;
  bool dribbler() const;
  void set_dribbler(bool value);

  // @@protoc_insertion_point(class_scope:VF_Commands)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Vec_2D* translational_output_;
  ::Vec_2D* kicker_;
  float rotational_output_;
  bool init_;
  bool dribbler_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_vFirmware_5fAPI_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class VF_Data : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:VF_Data) */ {
 public:
  VF_Data();
  virtual ~VF_Data();

  VF_Data(const VF_Data& from);

  inline VF_Data& operator=(const VF_Data& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  VF_Data(VF_Data&& from) noexcept
    : VF_Data() {
    *this = ::std::move(from);
  }

  inline VF_Data& operator=(VF_Data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const VF_Data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VF_Data* internal_default_instance() {
    return reinterpret_cast<const VF_Data*>(
               &_VF_Data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(VF_Data* other);
  friend void swap(VF_Data& a, VF_Data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline VF_Data* New() const final {
    return CreateMaybeMessage<VF_Data>(NULL);
  }

  VF_Data* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<VF_Data>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const VF_Data& from);
  void MergeFrom(const VF_Data& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VF_Data* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Vec_2D translational_displacement = 1;
  bool has_translational_displacement() const;
  void clear_translational_displacement();
  static const int kTranslationalDisplacementFieldNumber = 1;
  private:
  const ::Vec_2D& _internal_translational_displacement() const;
  public:
  const ::Vec_2D& translational_displacement() const;
  ::Vec_2D* release_translational_displacement();
  ::Vec_2D* mutable_translational_displacement();
  void set_allocated_translational_displacement(::Vec_2D* translational_displacement);

  // .Vec_2D translational_velocity = 2;
  bool has_translational_velocity() const;
  void clear_translational_velocity();
  static const int kTranslationalVelocityFieldNumber = 2;
  private:
  const ::Vec_2D& _internal_translational_velocity() const;
  public:
  const ::Vec_2D& translational_velocity() const;
  ::Vec_2D* release_translational_velocity();
  ::Vec_2D* mutable_translational_velocity();
  void set_allocated_translational_velocity(::Vec_2D* translational_velocity);

  // float rotational_displacement = 3;
  void clear_rotational_displacement();
  static const int kRotationalDisplacementFieldNumber = 3;
  float rotational_displacement() const;
  void set_rotational_displacement(float value);

  // float rotational_velocity = 4;
  void clear_rotational_velocity();
  static const int kRotationalVelocityFieldNumber = 4;
  float rotational_velocity() const;
  void set_rotational_velocity(float value);

  // @@protoc_insertion_point(class_scope:VF_Data)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Vec_2D* translational_displacement_;
  ::Vec_2D* translational_velocity_;
  float rotational_displacement_;
  float rotational_velocity_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_vFirmware_5fAPI_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vec_2D

// float x = 1;
inline void Vec_2D::clear_x() {
  x_ = 0;
}
inline float Vec_2D::x() const {
  // @@protoc_insertion_point(field_get:Vec_2D.x)
  return x_;
}
inline void Vec_2D::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:Vec_2D.x)
}

// float y = 2;
inline void Vec_2D::clear_y() {
  y_ = 0;
}
inline float Vec_2D::y() const {
  // @@protoc_insertion_point(field_get:Vec_2D.y)
  return y_;
}
inline void Vec_2D::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:Vec_2D.y)
}

// -------------------------------------------------------------------

// VF_Commands

// bool init = 1;
inline void VF_Commands::clear_init() {
  init_ = false;
}
inline bool VF_Commands::init() const {
  // @@protoc_insertion_point(field_get:VF_Commands.init)
  return init_;
}
inline void VF_Commands::set_init(bool value) {
  
  init_ = value;
  // @@protoc_insertion_point(field_set:VF_Commands.init)
}

// .Vec_2D translational_output = 2;
inline bool VF_Commands::has_translational_output() const {
  return this != internal_default_instance() && translational_output_ != NULL;
}
inline void VF_Commands::clear_translational_output() {
  if (GetArenaNoVirtual() == NULL && translational_output_ != NULL) {
    delete translational_output_;
  }
  translational_output_ = NULL;
}
inline const ::Vec_2D& VF_Commands::_internal_translational_output() const {
  return *translational_output_;
}
inline const ::Vec_2D& VF_Commands::translational_output() const {
  const ::Vec_2D* p = translational_output_;
  // @@protoc_insertion_point(field_get:VF_Commands.translational_output)
  return p != NULL ? *p : *reinterpret_cast<const ::Vec_2D*>(
      &::_Vec_2D_default_instance_);
}
inline ::Vec_2D* VF_Commands::release_translational_output() {
  // @@protoc_insertion_point(field_release:VF_Commands.translational_output)
  
  ::Vec_2D* temp = translational_output_;
  translational_output_ = NULL;
  return temp;
}
inline ::Vec_2D* VF_Commands::mutable_translational_output() {
  
  if (translational_output_ == NULL) {
    auto* p = CreateMaybeMessage<::Vec_2D>(GetArenaNoVirtual());
    translational_output_ = p;
  }
  // @@protoc_insertion_point(field_mutable:VF_Commands.translational_output)
  return translational_output_;
}
inline void VF_Commands::set_allocated_translational_output(::Vec_2D* translational_output) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete translational_output_;
  }
  if (translational_output) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      translational_output = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, translational_output, submessage_arena);
    }
    
  } else {
    
  }
  translational_output_ = translational_output;
  // @@protoc_insertion_point(field_set_allocated:VF_Commands.translational_output)
}

// float rotational_output = 3;
inline void VF_Commands::clear_rotational_output() {
  rotational_output_ = 0;
}
inline float VF_Commands::rotational_output() const {
  // @@protoc_insertion_point(field_get:VF_Commands.rotational_output)
  return rotational_output_;
}
inline void VF_Commands::set_rotational_output(float value) {
  
  rotational_output_ = value;
  // @@protoc_insertion_point(field_set:VF_Commands.rotational_output)
}

// .Vec_2D kicker = 4;
inline bool VF_Commands::has_kicker() const {
  return this != internal_default_instance() && kicker_ != NULL;
}
inline void VF_Commands::clear_kicker() {
  if (GetArenaNoVirtual() == NULL && kicker_ != NULL) {
    delete kicker_;
  }
  kicker_ = NULL;
}
inline const ::Vec_2D& VF_Commands::_internal_kicker() const {
  return *kicker_;
}
inline const ::Vec_2D& VF_Commands::kicker() const {
  const ::Vec_2D* p = kicker_;
  // @@protoc_insertion_point(field_get:VF_Commands.kicker)
  return p != NULL ? *p : *reinterpret_cast<const ::Vec_2D*>(
      &::_Vec_2D_default_instance_);
}
inline ::Vec_2D* VF_Commands::release_kicker() {
  // @@protoc_insertion_point(field_release:VF_Commands.kicker)
  
  ::Vec_2D* temp = kicker_;
  kicker_ = NULL;
  return temp;
}
inline ::Vec_2D* VF_Commands::mutable_kicker() {
  
  if (kicker_ == NULL) {
    auto* p = CreateMaybeMessage<::Vec_2D>(GetArenaNoVirtual());
    kicker_ = p;
  }
  // @@protoc_insertion_point(field_mutable:VF_Commands.kicker)
  return kicker_;
}
inline void VF_Commands::set_allocated_kicker(::Vec_2D* kicker) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete kicker_;
  }
  if (kicker) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      kicker = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, kicker, submessage_arena);
    }
    
  } else {
    
  }
  kicker_ = kicker;
  // @@protoc_insertion_point(field_set_allocated:VF_Commands.kicker)
}

// bool dribbler = 5;
inline void VF_Commands::clear_dribbler() {
  dribbler_ = false;
}
inline bool VF_Commands::dribbler() const {
  // @@protoc_insertion_point(field_get:VF_Commands.dribbler)
  return dribbler_;
}
inline void VF_Commands::set_dribbler(bool value) {
  
  dribbler_ = value;
  // @@protoc_insertion_point(field_set:VF_Commands.dribbler)
}

// -------------------------------------------------------------------

// VF_Data

// .Vec_2D translational_displacement = 1;
inline bool VF_Data::has_translational_displacement() const {
  return this != internal_default_instance() && translational_displacement_ != NULL;
}
inline void VF_Data::clear_translational_displacement() {
  if (GetArenaNoVirtual() == NULL && translational_displacement_ != NULL) {
    delete translational_displacement_;
  }
  translational_displacement_ = NULL;
}
inline const ::Vec_2D& VF_Data::_internal_translational_displacement() const {
  return *translational_displacement_;
}
inline const ::Vec_2D& VF_Data::translational_displacement() const {
  const ::Vec_2D* p = translational_displacement_;
  // @@protoc_insertion_point(field_get:VF_Data.translational_displacement)
  return p != NULL ? *p : *reinterpret_cast<const ::Vec_2D*>(
      &::_Vec_2D_default_instance_);
}
inline ::Vec_2D* VF_Data::release_translational_displacement() {
  // @@protoc_insertion_point(field_release:VF_Data.translational_displacement)
  
  ::Vec_2D* temp = translational_displacement_;
  translational_displacement_ = NULL;
  return temp;
}
inline ::Vec_2D* VF_Data::mutable_translational_displacement() {
  
  if (translational_displacement_ == NULL) {
    auto* p = CreateMaybeMessage<::Vec_2D>(GetArenaNoVirtual());
    translational_displacement_ = p;
  }
  // @@protoc_insertion_point(field_mutable:VF_Data.translational_displacement)
  return translational_displacement_;
}
inline void VF_Data::set_allocated_translational_displacement(::Vec_2D* translational_displacement) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete translational_displacement_;
  }
  if (translational_displacement) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      translational_displacement = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, translational_displacement, submessage_arena);
    }
    
  } else {
    
  }
  translational_displacement_ = translational_displacement;
  // @@protoc_insertion_point(field_set_allocated:VF_Data.translational_displacement)
}

// .Vec_2D translational_velocity = 2;
inline bool VF_Data::has_translational_velocity() const {
  return this != internal_default_instance() && translational_velocity_ != NULL;
}
inline void VF_Data::clear_translational_velocity() {
  if (GetArenaNoVirtual() == NULL && translational_velocity_ != NULL) {
    delete translational_velocity_;
  }
  translational_velocity_ = NULL;
}
inline const ::Vec_2D& VF_Data::_internal_translational_velocity() const {
  return *translational_velocity_;
}
inline const ::Vec_2D& VF_Data::translational_velocity() const {
  const ::Vec_2D* p = translational_velocity_;
  // @@protoc_insertion_point(field_get:VF_Data.translational_velocity)
  return p != NULL ? *p : *reinterpret_cast<const ::Vec_2D*>(
      &::_Vec_2D_default_instance_);
}
inline ::Vec_2D* VF_Data::release_translational_velocity() {
  // @@protoc_insertion_point(field_release:VF_Data.translational_velocity)
  
  ::Vec_2D* temp = translational_velocity_;
  translational_velocity_ = NULL;
  return temp;
}
inline ::Vec_2D* VF_Data::mutable_translational_velocity() {
  
  if (translational_velocity_ == NULL) {
    auto* p = CreateMaybeMessage<::Vec_2D>(GetArenaNoVirtual());
    translational_velocity_ = p;
  }
  // @@protoc_insertion_point(field_mutable:VF_Data.translational_velocity)
  return translational_velocity_;
}
inline void VF_Data::set_allocated_translational_velocity(::Vec_2D* translational_velocity) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete translational_velocity_;
  }
  if (translational_velocity) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      translational_velocity = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, translational_velocity, submessage_arena);
    }
    
  } else {
    
  }
  translational_velocity_ = translational_velocity;
  // @@protoc_insertion_point(field_set_allocated:VF_Data.translational_velocity)
}

// float rotational_displacement = 3;
inline void VF_Data::clear_rotational_displacement() {
  rotational_displacement_ = 0;
}
inline float VF_Data::rotational_displacement() const {
  // @@protoc_insertion_point(field_get:VF_Data.rotational_displacement)
  return rotational_displacement_;
}
inline void VF_Data::set_rotational_displacement(float value) {
  
  rotational_displacement_ = value;
  // @@protoc_insertion_point(field_set:VF_Data.rotational_displacement)
}

// float rotational_velocity = 4;
inline void VF_Data::clear_rotational_velocity() {
  rotational_velocity_ = 0;
}
inline float VF_Data::rotational_velocity() const {
  // @@protoc_insertion_point(field_get:VF_Data.rotational_velocity)
  return rotational_velocity_;
}
inline void VF_Data::set_rotational_velocity(float value) {
  
  rotational_velocity_ = value;
  // @@protoc_insertion_point(field_set:VF_Data.rotational_velocity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_vFirmware_5fAPI_2eproto
