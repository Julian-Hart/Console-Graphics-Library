flags=-02 -Wall -std=c2x
ldflags=-lbu

.PHONY: all clean

all: clean curses

curses: curses.o
	cc $(flags) $^ -o $@ $(ldflags)

curses.o: curses.c curses.h
	cc $(flags) -c $<

clean:
	rm -f *.o curses