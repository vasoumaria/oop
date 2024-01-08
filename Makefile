CC = g++
CFLAGS = -std=c++11
TARGET = ergantik
OBJS = person.o secretary.o course.o student.o professor.o main.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

person.o: person.cpp person.h
	$(CC) $(CFLAGS) -c person.cpp

student.o: student.cpp person.h
	$(CC) $(CFLAGS) -c student.cpp

professor.o: professor.cpp person.h
	$(CC) $(CFLAGS) -c professor.cpp

course.o: course.cpp course.h secretary.h
	$(CC) $(CFLAGS) -c course.cpp

secretary.o: secretary.cpp secretary.h course.h person.h
	$(CC) $(CFLAGS) -c secretary.cpp

main.o: main.cpp secretary.h 
	$(CC) $(CFLAGS) -c main.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
