CC=clang
CFLAGS=-I.

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)