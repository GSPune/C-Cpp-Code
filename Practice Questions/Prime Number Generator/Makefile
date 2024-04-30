CC=g++
CCFLAGS = -I.
#DEPS = Primes.hpp
TARGET = primes
OBJS = main.o Primes.o

%.o : %.cpp
	$(CC) -c $< $(CCFLAGS)
	
$(TARGET) : $(OBJS)
	$(CC) -o $@ $^ $(CCFLAGS)
	
.PHONY:clean

clean:
	rm -f *.o $(TARGET)