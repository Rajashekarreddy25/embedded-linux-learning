#app : main.c add.c sub.c
#	gcc main.c add.c sub.c -o app

#clean : 
#	rm -rf app

CC = gcc

CFLAGS = -Iinc

SRC = src/main.c src/add.c src/sub.c
OBJ = obj/main.o obj/add.o obj/sub.o

app: $(OBJ)
	$(CC) $(OBJ) -o app

obj/%.o: src/%.c
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj app
