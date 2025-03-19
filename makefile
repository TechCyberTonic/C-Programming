COMPILER = gcc
FILE = main.c
SCRIPT = ./a.out

run:
	$(COMPILER) $(FILE)
	clear
	$(SCRIPT)
