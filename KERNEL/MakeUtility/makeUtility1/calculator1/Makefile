#app : main.c add.c sub.c
#	gcc main.c add.c sub.c -o app

#clean : 
#	rm -rf app


CC = gcc


OBJ = obj/add.o obj/sub.o obj/main.o

app : $(OBJ)
	$(CC) main.o add.o sub.o -o app

main.o : main.c add.h sub.h
	$(CC) -c main.c

add.o : add.c add.h
	$(CC) -c add.c

sub.o : sub.c sub.h
	$(CC) -c sub.c


clean :
	rm -f *.o app
