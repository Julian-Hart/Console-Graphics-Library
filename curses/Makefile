CC = cc
CFLAGS = -O2 -Wall -std=c2x
LDFLAGS = -lncurses

.PHONY: all clean

all: curses

curses: curses.o
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

curses.o: curses.c curses.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o curses
