all: main

main: main.o
	cc -o main main.o -lgmp

main.o: main.c
	cc -c main.c

clean:
	rm -f main *.o *~

