CC=g++
CCFLAGS = -I./include -lm
#DEPS = 
ODIR = ./obj
TARGET = matrix
OBJS = main.o guassianElimination.o MatrixClass.o

OBJ = $(patsubst %,$(ODIR)/%,$(OBJS));

$(ODIR)/%.o : %.cpp
	$(CC) -c -o $@ $< $(CCFLAGS)

#$(OBJ) ensures that the *.o files are found(/picked there) in the obj folder	
$(TARGET) : $(OBJ)
	$(CC) -o $@ $^ $(CCFLAGS)
	
.PHONY:clean

clean:
	rm -f $(ODIR)/*.o $(TARGET)