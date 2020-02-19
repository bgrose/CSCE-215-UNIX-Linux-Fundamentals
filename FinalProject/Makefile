# makefile to build a program

findName: main.o
	g++ main.o -o findName

# main
main.o:	main.cpp
	g++ -c main.cpp

clean:
	/bin/rm -f fproj215 *.o

backup:
	tar cvf arc/bgrose.findName.tar *.cpp Makefile readme findName *.sh
