#Makefile for rememberfetch, super simple

#i wanna use gcc cuz yea
CC = gcc

main: rememberfetch.c
	cc rememberfetch.c -o rememberfetch

BINDIR = /bin

install: rememberfetch
	install -d /bin
	install -m 755 rememberfetch /bin

clean: rememberfetch
	rm -f rememberfetch

uninstall: rememberfetch
	rm -f /bin/rememberfetch
