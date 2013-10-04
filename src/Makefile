CC=g++
CCFLAGS=-Wall -O2

all: LinuxTimeCounter

LinuxTimeCounter: LinuxTimeCounter.o TimeCounter.o
	$(CC) $(CCFLAGS) -o $@ $^

%.o: %.cc
	$(CC) $(CCFLAGS) -c $<

.PHONY: clean

clean:
	rm *.o LinuxTimeCounter


