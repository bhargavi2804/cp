CFLAGS=-Wall
LIBS=-lcheck

all: factint

factint: fact.o implementation.o
gcc -o factint fact.o implementation.o

fact.o: fact.c implementation.h
gcc $(CFLAGS) -c fact.c

implementation.o: implementation.c implementation.h
gcc $(CFLAGS) -c implementation.c

test: factint-test
./factint-test

factint-test: implementation-test.o implementation.o
gcc -o factint-test implementation.o implementation-test.o $(LIBS)

implementation-test.o: implementation-test.c implementation.h
gcc $(CFLAGS) -c implementation-test.c
