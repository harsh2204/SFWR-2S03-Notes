CC = gcc
CFLAGS = -g -Wall -ansi -pedantic -O2
OBJ =  main.o qsort.o split.o
program: $(OBJ)
	${CC} -o $@ $?
clean:
	rm *.o program
