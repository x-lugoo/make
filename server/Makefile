CFLAGS=-Wall -O -g
CROSS_PLATFORM=
CC=$(CROSS_PLATFORM)gcc
SUB_DIR=./subdir
OBJS=main.o
OBJS+=test.o
OBJS+=$(SUB_DIR)/sub.o

main:$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

main.o:main.c
	$(CC) $(CFLAGS) -c $< -o $@

test.o:test.c
	$(CC) $(CFLAGS) -c $< -o $@
sub.o:sub.c
	$(CC) $(CFLAGS) -c $(SUB_DIR)/sub.c -o $@

clean:
	rm $(OBJS) 
