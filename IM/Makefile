cc=g++
bin=IMServer 
src=IMServer.cc mongoose/mongoose.c
include=-Imongoose/ -Imysql/include
lib=-Lmysql/lib 
lib_name=-lmysqlclient -ljsoncpp

$(bin):$(src)
	$(cc) -o $@ $^ -std=c++11 $(include) $(lib) $(lib_name)
.PHONY:clean
clean:
	rm -f $(bin)
