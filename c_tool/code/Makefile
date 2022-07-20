# File: Makefile
# Author: Gunawan Ali-Santosa
# Date: 07-12-2022

LIB_DIR = lib
CC = gcc

OBJ_FILES = test_c.o test_neon.o test_prime.o
BIN_FILES  = test_c.bin test_neon.bin test_prime.bin
LIB_FILE = $(LIB_DIR)/libtest.a
H_FILE = test_constant.h

%.o: %.c $(H_FILE)
	$(CC) -c $< -o $@

%.bin: %.o $(LIB_FILE)
	$(CC) -o $@ $< -L $(LIB_DIR) -ltest

all: $(OBJ_FILES) $(LIB_FILE)
	$(CC) -o test_c.bin test_c.c -L $(LIB_DIR) -ltest
	$(CC) -o test_neon.bin test_neon.c -L $(LIB_DIR) -ltest
	$(CC) -o test_prime.bin test_prime.c -L $(LIB_DIR) -ltest

clean:
	rm -f *.o
	rm -f *.bin

