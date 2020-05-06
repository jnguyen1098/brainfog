CC = clang
CFLAGS = -Wall -Wpedantic -Wextra -ggdb

run: cns
	bash test_all.sh

cns: cns.o
	$(CC) $(CFLAGS) cns.o -o cns

cns.o: 
	$(CC) $(CFLAGS) -c cns.c -o cns.o

clean:
	rm -rf cns.o cns tmp_output
