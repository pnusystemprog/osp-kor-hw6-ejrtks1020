CC = gcc

OBJS =phoneBookMain.o register.o print.o delete.o search.o

%.o: %.c
	$(CC) -c $<

phoneBook: $(OBJS)
	$(CC) -o phoneBook $(OBJS)

clean:
	rm -f main $(OBJS) phoneBook
