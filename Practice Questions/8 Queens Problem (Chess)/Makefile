CC=g++
CFLAGS=-I.
DEPS=Queen.hpp Board.hpp
TARGET=final_outp
OBJS=Board.o Queen.o main.o
	  

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) -c $< \
	$(CFLAGS) 

# $(CC) -c $< $(CCFLAGS)
# $(CC) -c $< -o $@

clean:
	rm -f *.o final_outp