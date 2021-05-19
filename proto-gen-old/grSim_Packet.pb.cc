// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#include "grSim_Packet.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_grSim_5fCommands_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_grSim_5fCommands_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_grSim_Commands;
}  // namespace protobuf_grSim_5fCommands_2eproto
namespace protobuf_grSim_5fReplacement_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_grSim_5fReplacement_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_grSim_Replacement;
}  // namespace protobuf_grSim_5fReplacement_2eproto
class grSim_PacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<grSim_Packet>
      _instance;
} _grSim_Packet_default_instance_;
namespace protobuf_grSim_5fPacket_2eproto {
static void InitDefaultsgrSim_Packet() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Packet_default_instance_;
    new (ptr) ::grSim_Packet();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Packet::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_grSim_Packet =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsgrSim_Packet}, {
      &protobuf_grSim_5fCommands_2eproto::scc_info_grSim_Commands.base,
      &protobuf_grSim_5fReplacement_2eproto::scc_info_grSim_Replacement.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_grSim_Packet.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grSim_Packet, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grSim_Packet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grSim_Packet, commands_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::grSim_Packet, replacement_),
  0,
  1,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::grSim_Packet)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::_grSim_Packet_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "grSim_Packet.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\022grSim_Packet.proto\032\024grSim_Commands.pro"
      "to\032\027grSim_Replacement.proto\"Z\n\014grSim_Pac"
      "ket\022!\n\010commands\030\001 \001(\0132\017.grSim_Commands\022\'"
      "\n\013replacement\030\002 \001(\0132\022.grSim_ReplacementB"
      "\007\n\005Proto"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 168);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "grSim_Packet.proto", &protobuf_RegisterTypes);
  ::protobuf_grSim_5fCommands_2eproto::AddDescriptors();
  ::protobuf_grSim_5fReplacement_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_grSim_5fPacket_2eproto

// ===================================================================

void grSim_Packet::InitAsDefaultInstance() {
  ::_grSim_Packet_default_instance_._instance.get_mutable()->commands_ = const_cast< ::grSim_Commands*>(
      ::grSim_Commands::internal_default_instance());
  ::_grSim_Packet_default_instance_._instance.get_mutable()->replacement_ = const_cast< ::grSim_Replacement*>(
      ::grSim_Replacement::internal_default_instance());
}
void grSim_Packet::clear_commands() {
  if (commands_ != NULL) commands_->Clear();
  clear_has_commands();
}
void grSim_Packet::clear_replacement() {
  if (replacement_ != NULL) replacement_->Clear();
  clear_has_replacement();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int grSim_Packet::kCommandsFieldNumber;
const int grSim_Packet::kReplacementFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

grSim_Packet::grSim_Packet()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_grSim_5fPacket_2eproto::scc_info_grSim_Packet.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_Packet)
}
grSim_Packet::grSim_Packet(const grSim_Packet& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_commands()) {
    commands_ = new ::grSim_Commands(*from.commands_);
  } else {
    commands_ = NULL;
  }
  if (from.has_replacement()) {
    replacement_ = new ::grSim_Replacement(*from.replacement_);
  } else {
    replacement_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:grSim_Packet)
}

void grSim_Packet::SharedCtor() {
  ::memset(&commands_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&replacement_) -
      reinterpret_cast<char*>(&commands_)) + sizeof(replacement_));
}

grSim_Packet::~grSim_Packet() {
  // @@protoc_insertion_point(destructor:grSim_Packet)
  SharedDtor();
}

void grSim_Packet::SharedDtor() {
  if (this != internal_default_instance()) delete commands_;
  if (this != internal_default_instance()) delete replacement_;
}

void grSim_Packet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* grSim_Packet::descriptor() {
  ::protobuf_grSim_5fPacket_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fPacket_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const grSim_Packet& grSim_Packet::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_grSim_5fPacket_2eproto::scc_info_grSim_Packet.base);
  return *internal_default_instance();
}


void grSim_Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(commands_ != NULL);
      commands_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(replacement_ != NULL);
      replacement_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool grSim_Packet::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:grSim_Packet)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .grSim_Commands commands = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_commands()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .grSim_Replacement replacement = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_replacement()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:grSim_Packet)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:grSim_Packet)
  return false;
#undef DO_
}

void grSim_Packet::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_commands(), output);
  }

  // optional .grSim_Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_replacement(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:grSim_Packet)
}

::google::protobuf::uint8* grSim_Packet::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Packet)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_commands(), deterministic, target);
  }

  // optional .grSim_Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_replacement(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Packet)
  return target;
}

size_t grSim_Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Packet)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 3u) {
    // optional .grSim_Commands commands = 1;
    if (has_commands()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *commands_);
    }

    // optional .grSim_Replacement replacement = 2;
    if (has_replacement()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *replacement_);
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_Packet::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Packet* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const grSim_Packet>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Packet)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Packet)
    MergeFrom(*source);
  }
}

void grSim_Packet::MergeFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_commands()->::grSim_Commands::MergeFrom(from.commands());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_replacement()->::grSim_Replacement::MergeFrom(from.replacement());
    }
  }
}

void grSim_Packet::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Packet::CopyFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Packet::IsInitialized() const {
  if (has_commands()) {
    if (!this->commands_->IsInitialized()) return false;
  }
  if (has_replacement()) {
    if (!this->replacement_->IsInitialized()) return false;
  }
  return true;
}

void grSim_Packet::Swap(grSim_Packet* other) {
  if (other == this) return;
  InternalSwap(other);
}
void grSim_Packet::InternalSwap(grSim_Packet* other) {
  using std::swap;
  swap(commands_, other->commands_);
  swap(replacement_, other->replacement_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata grSim_Packet::GetMetadata() const {
  protobuf_grSim_5fPacket_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_grSim_5fPacket_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::grSim_Packet* Arena::CreateMaybeMessage< ::grSim_Packet >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_Packet >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
