all: sieve.o main.o
	gcc sieve.o main.o -lm

sieve.o: sieve.h sieve.c
	gcc -c sieve.c

run:
	./a.out

clean:
	rm *.o
