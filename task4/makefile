all: myexe
CC=gcc
LIBS=-lmyfunctions
OBJS=driver.o ./library/libmyfunctions.a
INSTDIR = /usr/bin

myexe: $(OBJS)
	$(CC) driver.o -lmyfunctions -L./library/ -o myexe

include: ./library/makefile
	
driver.o: ./library/libmyfunctions.a driver.c
	$(CC) -c driver.c -lmyfunctions -L./library/
clean:
	-@rm -f *.o
	@echo "Successfully cleaned"

install: myexe
	@cp myexe $(INSTDIR)
	@echo "Successfully installed"
