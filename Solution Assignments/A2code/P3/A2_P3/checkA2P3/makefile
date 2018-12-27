CC = gcc  
LIBS = -lm

OBJ = sinc.o sinc2.o

%.o: %.c 
	$(CC) -c -o $@ $<

check: $(OBJ) check.o
	$(CC) -o $@ $^ $(LIBS)

clean:
	rm -f *.o check
