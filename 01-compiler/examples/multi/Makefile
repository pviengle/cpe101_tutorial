# Makefile -- run `make` (Linux/macOS) or `mingw32-make` (MSYS2)
# NOTE: the indented lines MUST start with a TAB, not spaces.
CC     = gcc
CFLAGS = -Wall -Wextra -std=c11

app: main.o mathutil.o
	$(CC) main.o mathutil.o -o app

main.o: main.c mathutil.h
	$(CC) $(CFLAGS) -c main.c

mathutil.o: mathutil.c mathutil.h
	$(CC) $(CFLAGS) -c mathutil.c

clean:
	rm -f *.o app app.exe
