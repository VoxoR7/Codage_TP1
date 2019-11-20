CC=g++
CFLAGS=-g -Wall

PROG=test

$(PROG): test.o hadamar.o
	$(CC) test.o hadamar.o -o $(PROG)

test.o: test.cpp
	$(CC) $(CFLAGS) -c test.cpp -o test.o

hadamar.o: hadamar.h hadamar.cpp
	$(CC) $(CFLAGS) -c hadamar.cpp -o hadamar.o

clean:
	rm -f *o

mrproper: clean
	rm -f $(PROG)

makeall: mrproper clear $(PROG)

clear:
	clear