all: sieve.o driver.o
	gcc sieve.o driver.o -lm

sieve.o: sieve.h sieve.c
	gcc -c sieve.c

run:
	./a.out

clean:
	rm *.o
