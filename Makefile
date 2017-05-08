simple_read.o: simple_read.c
	clang -c -o simple_read.o simple_read.c
clean:
	rm -rf *.o
