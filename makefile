COMPILER = gcc
FILE = main.c
SCRIPT = ./a.exe

run:
	$(COMPILER) $(FILE)
	clear
	$(SCRIPT)
