.PHONY: all clean

all: foo

SRCS := $(shell find . -name '*.cpp')
OBJS := $(SRCS:.cpp=.o)

foo: $(OBJS)
	gcc -o $@ $^ -lstdc++ -Wall

%.o: %.cpp
	gcc -std=c++17 -c -g -O3 -o $@ $<

clean:
	rm -rf foo *.o
