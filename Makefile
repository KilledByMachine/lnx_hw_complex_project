CC = gcc
CFLAGS = -Wall -Wextra -std=c99

LIBCALC = libcalc.a
LIBCONVERT = libconvert.so

.PHONY: all clean

all: calculator low uper

calculator: main.o $(LIBCALC)
	$(CC) $(CFLAGS) -o calculator main.o -L. -lcalc -lm

low: low.o $(LIBCONVERT)
	$(CC) $(CFLAGS) -o low low.o -L. -lconvert

uper: uper.o $(LIBCONVERT)
	$(CC) $(CFLAGS) -o uper uper.o -L. -lconvert

main.o: main.c calc.h
	$(CC) $(CFLAGS) -c main.c

uper.o: uper.c convert.h
	$(CC) $(CFLAGS) -c uper.c

low.o: low.c convert.h
	$(CC) $(CFLAGS) -c low.c

$(LIBCALC): calc.o
	ar rcs $(LIBCALC) calc.o

$(LIBCONVERT): convert.o
	$(CC) $(CFLAGS) -shared -o $(LIBCONVERT) convert.o

calc.o: calc.c calc.h
	$(CC) $(CFLAGS) -c calc.c

convert.o: convert.c convert.h
	$(CC) $(CFLAGS) -fPIC -c convert.c

clean:
	rm -f *.o *.a *.so calculator low uper

