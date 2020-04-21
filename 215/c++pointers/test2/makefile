CC=g++
CCFLAGS=-g -Wall -Wpedantic
# assign ARCHIVE to archives/final-`date -I`.tar.gz; doing it this way evaluates immediately
ARCHIVE!= printf 'archives/ex2-%s.tar.gz' `date -I`

$(ARCHIVE): archives
	tar -cvzf $(ARCHIVE) makefile README ex2.cpp

archives:
	mkdir archives

ex2:	ex2.o
	g++ ex2.o -o ex2

ex2.s: ex2.cpp
	$(CC) $(CCFLAGS) -S ex2.cpp

.PHONY: clean clobber backup tasks assembly

assembly: ex2.s

clean:
	rm -f ex2.s ex2

clobber: clean
	rm -rf archives

backup:
	tar -czvf bgrose.backup.tar.gz *.cpp README makefile ex2

tasks:
	@echo assembly clean clobber backup ext2
