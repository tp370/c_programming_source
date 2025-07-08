# Makefile example
all: exc8_c.out

exc8_c.out: exc8.c exc8sub.c exc8sub.h
	gcc -o exc8 exc8.c exc8sub.c -lm
	exc8 > exc8_c.out
	rm -f exc8

# ^ not spaces, must be a tab
# clean: