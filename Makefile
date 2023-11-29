CC = g++
CFLAGS = -std=c++11
TARGET = ergantik
OBJS = person.o Secretary.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

person.o: person.cpp person.h
	$(CC) $(CFLAGS) -c person.cpp

Secretary.o: Secretary.cpp Secretary.h person.h
	$(CC) $(CFLAGS) -c Secretary.cpp

main.o: main.cpp Secretary.h person.h
	$(CC) $(CFLAGS) -c main.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
