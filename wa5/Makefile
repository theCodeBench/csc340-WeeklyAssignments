SOURCE = main.cpp

LIBSRC = functions.cpp

OBJS = $(SOURCE:.cpp=.o)

LIBOBJS = $(LIBSRC:.cpp=.o)

#GNU C/C++ Compiler
GCC = g++

# GNU C/C++ Linker
LINK = g++

# Archive
AR = ar rs

# Compiler flags
CFLAGS = -Wall -fPIC -g -std=c++11
CXXFLAGS = $(CFLAGS)

# Fill in special libraries needed here
LIBS = -lMyLib -L.

.PHONY: clean

# Targets include all, clean, debug, tar

all : mainStatic mainShared

mainStatic: $(OBJS) libMyLib.a
	$(LINK) -o $@ $(OBJS) $(LIBS)

mainShared: $(OBJS) libMyLib.so
	$(GCC) -o $@ $(OBJS) $(LIBS)

lib: libMyLib.a libMyLib.so

libMyLib.a: $(LIBOBJS)
	$(AR) $@ $^

libMyLib.so: $(LIBOBJS)
	$(GCC) -o $@ -shared $^

clean:
	rm -rf *.o *.d core mainStatic mainShared libMyLib.*

debug: CXXFLAGS = -DDEBUG -g -std=c++11
debug: main

tar: clean
	tar zcvf main.tgz $(SOURCE) *.h Makefile

-include $(SOURCE:.cpp=.d)

-include $(LIBSRC:.cpp=.d)

%.d: %.cpp
	@set -e; /usr/bin/rm -rf $@;$(GCC) -MM $< $(CXXFLAGS) > $@

