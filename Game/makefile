PROGRAM = game
CC = gcc
CFLAGS = -Wall -Wno-unused-variable
LDLIBS  = -lglut -lGLU -lGL

$(PROGRAM) : main.o callback.o 
	$(CC) $(CFLAGS) -o $@ $^ $(LDLIBS)

callback.o : callback.c callback.h	
	$(CC) $(CFLAGS) -c -o $@ $<

main.o : main.c
	$(CC) $(CFLAGS) -c -o $@ $< 

PHONY : clean

clean:
	rm -rf *.o $(PROGRAM)
