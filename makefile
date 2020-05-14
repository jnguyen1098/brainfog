CC = gcc
CFLAGS = -Wall -Ofast -Wpedantic -Wextra -ggdb

run: callosum
	./callosum bottle1.bf output.c && gcc output.c && ./a.out > temp.txt && cmp temp.txt bottles.txt && rm a.out && vim output.c

callosum: callosum.o
	$(CC) $(CFLAGS) callosum.o -o callosum

callosum.o: 
	$(CC) $(CFLAGS) -c callosum.c -o callosum.o

clean:
	rm -rf callosum callosum.o
