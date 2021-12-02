# Makefile

CC = gcc
TEST = test_uri_1113.x
UNITY = ../Unity/src/unity.c

all:	$(TEST)

test_%.x:	test_*.c
		$(CC) $< $(UNITY) -o $@ -lm
		./$@
		rm $@
