default: vbp-old vbp

# if proto definition is modified, empty "proto-gen" folder 
# and then run "protoc -I=proto --cpp_out=proto-gen proto/*.proto" to apply the change


#compiler = clang++
compiler = g++

boostlib = -lpthread -lboost_system -lboost_thread 

std = -std=c++17

cppflags = $(std) $(boostlib)
 
vbp: vbp.cpp
	$(compiler) -o $@ $< $(cppflags)


vbp-old: vbp-old.cpp
	$(compiler) -o $@ $< $(cppflags)



clean:
	@rm vbp vbp-old