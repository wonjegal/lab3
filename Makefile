CC = g++
CFLAGS = -O2
TARGET = calc
OBJS = main.o math_func.o

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o calc
