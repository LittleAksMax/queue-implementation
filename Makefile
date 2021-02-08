CC=gcc

queue.exe: queue.o main.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $<

clean:
	rm *.o *.exe