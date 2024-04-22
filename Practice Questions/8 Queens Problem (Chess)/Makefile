CC = g++
CFLAGS = -I.

final_outp: main.o board.o queen.o
	$(CC) -o final_outp main.o board.o queen.o
	
main.o: main.cpp
	$(CC) -c main.cpp $(CCFLAGS)

board.o: board.cpp
	$(CC) -c board.cpp \
	$(CCFLAGS)

queen.o: queen.cpp
	$(CC) -c queen.cpp \
	$(CCFLAGS)

clean:
	\rm *.o final_outp