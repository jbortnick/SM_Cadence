# File: Makefile
# Author: Gunawan Ali-Santosa
# Date: 07-12-2022

CC = gcc

OBJ_FILES = neon_lib.o prime_lib.o 

.o: .c
	$(CC) -c -o $@

all: $(OBJ_FILES)
	ar rcs libtest.a $(OBJ_FILES)

clean:
	rm -f *.o
	rm -f *.a

