#------------------------------------------------------------------------------#
# This makefile was generated by 'cbp2make' tool rev.138                       #
#------------------------------------------------------------------------------#


WORKDIR = `pwd`

CC = gcc
CXX = g++
AR = ar
LD = g++
WINDRES = windres

INC = 
CFLAGS = 
RESINC = 
LIBDIR = 
LIB = 
LDFLAGS =  -pthread

INC_DEBUG_LINUX32 =  $(INC) -I../inc -I../../../.. -I../../../shared/inc
CFLAGS_DEBUG_LINUX32 =  $(CFLAGS) -g -m32 -D_EG_LINUX_PLATFORM -DEG_DEBUGGER
RESINC_DEBUG_LINUX32 =  $(RESINC)
RCFLAGS_DEBUG_LINUX32 =  $(RCFLAGS)
LIBDIR_DEBUG_LINUX32 =  $(LIBDIR) -L../../../../Common-cpp -L../../../../Photon-cpp -L../../../../LoadBalancing-cpp
LIB_DEBUG_LINUX32 = $(LIB) -lLoadBalancingDebug32 -lPhotonDebug32 -lCommonDebug32
LDFLAGS_DEBUG_LINUX32 =  $(LDFLAGS) -m32
OBJDIR_DEBUG_LINUX32 = obj/Debug32
DEP_DEBUG_LINUX32 = 
OUT_DEBUG_LINUX32 = bin/Debug32/demo_linux_particle_console

INC_RELEASE_LINUX32 =  $(INC) -I../inc -I../../../.. -I../../../shared/inc
CFLAGS_RELEASE_LINUX32 =  $(CFLAGS) -O3 -m32 -DNDEBUG -D_EG_LINUX_PLATFORM
RESINC_RELEASE_LINUX32 =  $(RESINC)
RCFLAGS_RELEASE_LINUX32 =  $(RCFLAGS)
LIBDIR_RELEASE_LINUX32 =  $(LIBDIR) -L../../../../Common-cpp -L../../../../Photon-cpp -L../../../../LoadBalancing-cpp
LIB_RELEASE_LINUX32 = $(LIB) -lLoadBalancingRelease32 -lPhotonRelease32 -lCommonRelease32
LDFLAGS_RELEASE_LINUX32 =  $(LDFLAGS) -s -m32
OBJDIR_RELEASE_LINUX32 = obj/Release32
DEP_RELEASE_LINUX32 = 
OUT_RELEASE_LINUX32 = bin/Release32/demo_linux_particle_console

INC_DEBUG_LINUX64 =  $(INC) -I../inc -I../../../.. -I../../../shared/inc
CFLAGS_DEBUG_LINUX64 =  $(CFLAGS) -g -m64 -D_EG_LINUX_PLATFORM -DEG_DEBUGGER
RESINC_DEBUG_LINUX64 =  $(RESINC)
RCFLAGS_DEBUG_LINUX64 =  $(RCFLAGS)
LIBDIR_DEBUG_LINUX64 =  $(LIBDIR) -L../../../../Common-cpp -L../../../../Photon-cpp -L../../../../LoadBalancing-cpp
LIB_DEBUG_LINUX64 = $(LIB) -lLoadBalancingDebug64 -lPhotonDebug64 -lCommonDebug64
LDFLAGS_DEBUG_LINUX64 =  $(LDFLAGS) -m64
OBJDIR_DEBUG_LINUX64 = obj/Debug64
DEP_DEBUG_LINUX64 = 
OUT_DEBUG_LINUX64 = bin/Debug64/demo_linux_particle_console

INC_RELEASE_LINUX64 =  $(INC) -I../inc -I../../../.. -I../../../shared/inc
CFLAGS_RELEASE_LINUX64 =  $(CFLAGS) -O3 -m64 -DNDEBUG -D_EG_LINUX_PLATFORM
RESINC_RELEASE_LINUX64 =  $(RESINC)
RCFLAGS_RELEASE_LINUX64 =  $(RCFLAGS)
LIBDIR_RELEASE_LINUX64 =  $(LIBDIR) -L../../../../Common-cpp -L../../../../Photon-cpp -L../../../../LoadBalancing-cpp
LIB_RELEASE_LINUX64 = $(LIB) -lLoadBalancingRelease64 -lPhotonRelease64 -lCommonRelease64
LDFLAGS_RELEASE_LINUX64 =  $(LDFLAGS) -s -m64
OBJDIR_RELEASE_LINUX64 = obj/Release64
DEP_RELEASE_LINUX64 = 
OUT_RELEASE_LINUX64 = bin/Release64/demo_linux_particle_console

OBJ_DEBUG_LINUX32 = $(OBJDIR_DEBUG_LINUX32)/__/src/ConsoleView.o $(OBJDIR_DEBUG_LINUX32)/__/src/main.o $(OBJDIR_DEBUG_LINUX32)/__/__/src/LoadBalancingListener.o $(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src/Console.o

OBJ_RELEASE_LINUX32 = $(OBJDIR_RELEASE_LINUX32)/__/src/ConsoleView.o $(OBJDIR_RELEASE_LINUX32)/__/src/main.o $(OBJDIR_RELEASE_LINUX32)/__/__/src/LoadBalancingListener.o $(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src/Console.o

OBJ_DEBUG_LINUX64 = $(OBJDIR_DEBUG_LINUX64)/__/src/ConsoleView.o $(OBJDIR_DEBUG_LINUX64)/__/src/main.o $(OBJDIR_DEBUG_LINUX64)/__/__/src/LoadBalancingListener.o $(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src/Console.o

OBJ_RELEASE_LINUX64 = $(OBJDIR_RELEASE_LINUX64)/__/src/ConsoleView.o $(OBJDIR_RELEASE_LINUX64)/__/src/main.o $(OBJDIR_RELEASE_LINUX64)/__/__/src/LoadBalancingListener.o $(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src/Console.o

all: debug_linux32 release_linux32 debug_linux64 release_linux64

clean: clean_debug_linux32 clean_release_linux32 clean_debug_linux64 clean_release_linux64

before_debug_linux32: 
	test -d bin/Debug32 || mkdir -p bin/Debug32
	test -d $(OBJDIR_DEBUG_LINUX32)/__/src || mkdir -p $(OBJDIR_DEBUG_LINUX32)/__/src
	test -d $(OBJDIR_DEBUG_LINUX32)/__/__/src || mkdir -p $(OBJDIR_DEBUG_LINUX32)/__/__/src
	test -d $(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src || mkdir -p $(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src

after_debug_linux32: 

debug_linux32: before_debug_linux32 out_debug_linux32 after_debug_linux32

out_debug_linux32: before_debug_linux32 $(OBJ_DEBUG_LINUX32) $(DEP_DEBUG_LINUX32)
	$(LD) $(LIBDIR_DEBUG_LINUX32) -o $(OUT_DEBUG_LINUX32) $(OBJ_DEBUG_LINUX32)  $(LDFLAGS_DEBUG_LINUX32) $(LIB_DEBUG_LINUX32)

$(OBJDIR_DEBUG_LINUX32)/__/src/ConsoleView.o: ../src/ConsoleView.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX32) $(INC_DEBUG_LINUX32) -c ../src/ConsoleView.cpp -o $(OBJDIR_DEBUG_LINUX32)/__/src/ConsoleView.o

$(OBJDIR_DEBUG_LINUX32)/__/src/main.o: ../src/main.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX32) $(INC_DEBUG_LINUX32) -c ../src/main.cpp -o $(OBJDIR_DEBUG_LINUX32)/__/src/main.o

$(OBJDIR_DEBUG_LINUX32)/__/__/src/LoadBalancingListener.o: ../../src/LoadBalancingListener.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX32) $(INC_DEBUG_LINUX32) -c ../../src/LoadBalancingListener.cpp -o $(OBJDIR_DEBUG_LINUX32)/__/__/src/LoadBalancingListener.o

$(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src/Console.o: ../../../shared/src/Console.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX32) $(INC_DEBUG_LINUX32) -c ../../../shared/src/Console.cpp -o $(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src/Console.o

clean_debug_linux32: 
	rm -f $(OBJ_DEBUG_LINUX32) $(OUT_DEBUG_LINUX32)
	rm -rf bin/Debug32
	rm -rf $(OBJDIR_DEBUG_LINUX32)/__/src
	rm -rf $(OBJDIR_DEBUG_LINUX32)/__/__/src
	rm -rf $(OBJDIR_DEBUG_LINUX32)/__/__/__/shared/src

before_release_linux32: 
	test -d bin/Release32 || mkdir -p bin/Release32
	test -d $(OBJDIR_RELEASE_LINUX32)/__/src || mkdir -p $(OBJDIR_RELEASE_LINUX32)/__/src
	test -d $(OBJDIR_RELEASE_LINUX32)/__/__/src || mkdir -p $(OBJDIR_RELEASE_LINUX32)/__/__/src
	test -d $(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src || mkdir -p $(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src

after_release_linux32: 

release_linux32: before_release_linux32 out_release_linux32 after_release_linux32

out_release_linux32: before_release_linux32 $(OBJ_RELEASE_LINUX32) $(DEP_RELEASE_LINUX32)
	$(LD) $(LIBDIR_RELEASE_LINUX32) -o $(OUT_RELEASE_LINUX32) $(OBJ_RELEASE_LINUX32)  $(LDFLAGS_RELEASE_LINUX32) $(LIB_RELEASE_LINUX32)

$(OBJDIR_RELEASE_LINUX32)/__/src/ConsoleView.o: ../src/ConsoleView.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX32) $(INC_RELEASE_LINUX32) -c ../src/ConsoleView.cpp -o $(OBJDIR_RELEASE_LINUX32)/__/src/ConsoleView.o

$(OBJDIR_RELEASE_LINUX32)/__/src/main.o: ../src/main.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX32) $(INC_RELEASE_LINUX32) -c ../src/main.cpp -o $(OBJDIR_RELEASE_LINUX32)/__/src/main.o

$(OBJDIR_RELEASE_LINUX32)/__/__/src/LoadBalancingListener.o: ../../src/LoadBalancingListener.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX32) $(INC_RELEASE_LINUX32) -c ../../src/LoadBalancingListener.cpp -o $(OBJDIR_RELEASE_LINUX32)/__/__/src/LoadBalancingListener.o

$(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src/Console.o: ../../../shared/src/Console.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX32) $(INC_RELEASE_LINUX32) -c ../../../shared/src/Console.cpp -o $(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src/Console.o

clean_release_linux32: 
	rm -f $(OBJ_RELEASE_LINUX32) $(OUT_RELEASE_LINUX32)
	rm -rf bin/Release32
	rm -rf $(OBJDIR_RELEASE_LINUX32)/__/src
	rm -rf $(OBJDIR_RELEASE_LINUX32)/__/__/src
	rm -rf $(OBJDIR_RELEASE_LINUX32)/__/__/__/shared/src

before_debug_linux64: 
	test -d bin/Debug64 || mkdir -p bin/Debug64
	test -d $(OBJDIR_DEBUG_LINUX64)/__/src || mkdir -p $(OBJDIR_DEBUG_LINUX64)/__/src
	test -d $(OBJDIR_DEBUG_LINUX64)/__/__/src || mkdir -p $(OBJDIR_DEBUG_LINUX64)/__/__/src
	test -d $(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src || mkdir -p $(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src

after_debug_linux64: 

debug_linux64: before_debug_linux64 out_debug_linux64 after_debug_linux64

out_debug_linux64: before_debug_linux64 $(OBJ_DEBUG_LINUX64) $(DEP_DEBUG_LINUX64)
	$(LD) $(LIBDIR_DEBUG_LINUX64) -o $(OUT_DEBUG_LINUX64) $(OBJ_DEBUG_LINUX64)  $(LDFLAGS_DEBUG_LINUX64) $(LIB_DEBUG_LINUX64)

$(OBJDIR_DEBUG_LINUX64)/__/src/ConsoleView.o: ../src/ConsoleView.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX64) $(INC_DEBUG_LINUX64) -c ../src/ConsoleView.cpp -o $(OBJDIR_DEBUG_LINUX64)/__/src/ConsoleView.o

$(OBJDIR_DEBUG_LINUX64)/__/src/main.o: ../src/main.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX64) $(INC_DEBUG_LINUX64) -c ../src/main.cpp -o $(OBJDIR_DEBUG_LINUX64)/__/src/main.o

$(OBJDIR_DEBUG_LINUX64)/__/__/src/LoadBalancingListener.o: ../../src/LoadBalancingListener.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX64) $(INC_DEBUG_LINUX64) -c ../../src/LoadBalancingListener.cpp -o $(OBJDIR_DEBUG_LINUX64)/__/__/src/LoadBalancingListener.o

$(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src/Console.o: ../../../shared/src/Console.cpp
	$(CXX) $(CFLAGS_DEBUG_LINUX64) $(INC_DEBUG_LINUX64) -c ../../../shared/src/Console.cpp -o $(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src/Console.o

clean_debug_linux64: 
	rm -f $(OBJ_DEBUG_LINUX64) $(OUT_DEBUG_LINUX64)
	rm -rf bin/Debug64
	rm -rf $(OBJDIR_DEBUG_LINUX64)/__/src
	rm -rf $(OBJDIR_DEBUG_LINUX64)/__/__/src
	rm -rf $(OBJDIR_DEBUG_LINUX64)/__/__/__/shared/src

before_release_linux64: 
	test -d bin/Release64 || mkdir -p bin/Release64
	test -d $(OBJDIR_RELEASE_LINUX64)/__/src || mkdir -p $(OBJDIR_RELEASE_LINUX64)/__/src
	test -d $(OBJDIR_RELEASE_LINUX64)/__/__/src || mkdir -p $(OBJDIR_RELEASE_LINUX64)/__/__/src
	test -d $(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src || mkdir -p $(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src

after_release_linux64: 

release_linux64: before_release_linux64 out_release_linux64 after_release_linux64

out_release_linux64: before_release_linux64 $(OBJ_RELEASE_LINUX64) $(DEP_RELEASE_LINUX64)
	$(LD) $(LIBDIR_RELEASE_LINUX64) -o $(OUT_RELEASE_LINUX64) $(OBJ_RELEASE_LINUX64)  $(LDFLAGS_RELEASE_LINUX64) $(LIB_RELEASE_LINUX64)

$(OBJDIR_RELEASE_LINUX64)/__/src/ConsoleView.o: ../src/ConsoleView.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX64) $(INC_RELEASE_LINUX64) -c ../src/ConsoleView.cpp -o $(OBJDIR_RELEASE_LINUX64)/__/src/ConsoleView.o

$(OBJDIR_RELEASE_LINUX64)/__/src/main.o: ../src/main.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX64) $(INC_RELEASE_LINUX64) -c ../src/main.cpp -o $(OBJDIR_RELEASE_LINUX64)/__/src/main.o

$(OBJDIR_RELEASE_LINUX64)/__/__/src/LoadBalancingListener.o: ../../src/LoadBalancingListener.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX64) $(INC_RELEASE_LINUX64) -c ../../src/LoadBalancingListener.cpp -o $(OBJDIR_RELEASE_LINUX64)/__/__/src/LoadBalancingListener.o

$(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src/Console.o: ../../../shared/src/Console.cpp
	$(CXX) $(CFLAGS_RELEASE_LINUX64) $(INC_RELEASE_LINUX64) -c ../../../shared/src/Console.cpp -o $(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src/Console.o

clean_release_linux64: 
	rm -f $(OBJ_RELEASE_LINUX64) $(OUT_RELEASE_LINUX64)
	rm -rf bin/Release64
	rm -rf $(OBJDIR_RELEASE_LINUX64)/__/src
	rm -rf $(OBJDIR_RELEASE_LINUX64)/__/__/src
	rm -rf $(OBJDIR_RELEASE_LINUX64)/__/__/__/shared/src

.PHONY: before_debug_linux32 after_debug_linux32 clean_debug_linux32 before_release_linux32 after_release_linux32 clean_release_linux32 before_debug_linux64 after_debug_linux64 clean_debug_linux64 before_release_linux64 after_release_linux64 clean_release_linux64

