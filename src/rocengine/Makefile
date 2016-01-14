CXX=g++
CC=gcc
CXXFLAGS=-std=c++11

all: main.o vectorpoint.o
	$(CXX) $(CXXFLAGS) $^ -o main
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $^
vectorpoint.o: vectorpoint.cpp
	$(CXX) $(CXXFLAGS) -c $^

#measure: measure.c
#	$(CC) $< -o $@

clean:
	rm -rf main *.o
