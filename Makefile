INCDIR ?= -I /usr/local/include
STATIC ?=
CXXFLAGS = $(STATIC) -Wno-everything -O3 -g0 ${INCDIR}
LDFLAGS = $(CXXFLAGS)

# OpenBSD and Bitrig require egcc and eg++
# System compiler on OpenBSD is too old and clang on gcc
# produces broken exectuable.
CC ?= egcc
CXX ?= eg++

dnsseed: dns.o bitcoin.o netbase.o protocol.o db.o main.o util.o
	${CXX} -pthread $(LDFLAGS) -o dnsseed dns.o bitcoin.o netbase.o protocol.o db.o main.o util.o -lcrypto

%.o: %.cpp config.h bitcoin.h netbase.h protocol.h db.h serialize.h uint256.h util.h
	${CXX} -std=c++11 -pthread $(CXXFLAGS) -Wall -Wno-unused -Wno-sign-compare -Wno-reorder -Wno-comment -c -o $@ $<

%.o: %.c
	${CC} $(CXXFLAGS) -c -o $@ $<

dns.o: dns.c
	${CC} -pthread -std=c99 $(CXXFLAGS) dns.c -Wall -c -o dns.o

%.o: %.cpp

clean:
	rm -f *.o dnsseed dnsseed.dat dnsseed.dump dnsstats.log nohup.out
