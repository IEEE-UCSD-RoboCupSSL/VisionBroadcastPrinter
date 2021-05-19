default: vbp

# if proto definition is modified, empty "proto-gen" folder 
# and then run "protoc -I=proto --cpp_out=proto-gen proto/*.proto" to apply the change


COMPILER = g++

PROTO = proto
PROTOBUF = proto-gen
PROTO_INC = -I$(PROTOBUF) 
PROTO_SRC = $(wildcard $(PROTOBUF)/*pb.cc)
PROTODEF_SRC = $(wildcard $(PROTO)/*.proto)

vpath %.pb.cc $(dir $(PROTO_SRC))
PROTO_OBJS = $(addprefix $(PROTOBUF)/, $(notdir $(PROTODEF_SRC:.proto=.pb.o)) )
PROTO_LIB = -L/usr/local/lib -lprotobuf -lpthread

STD = -std=c++17

BOOST = -lpthread -lboost_system -lboost_thread 
FLAGS = $(STD) $(PROTO_LIB) $(PROTO_INC) $(BOOST)


$(PROTOBUF)/%.o: %.cc 
	$(COMPILER) -c $< $(FLAGS) -o $@
 

vbp: vbp.cpp $(PROTO_OBJS)
	$(COMPILER) vbp.cpp $(PROTO_OBJS) $(FLAGS) -o $@



clean:
	@rm -f vbp 
	@rm -f $(PROTOBUF)/*.o
	@rm -f vbp.o