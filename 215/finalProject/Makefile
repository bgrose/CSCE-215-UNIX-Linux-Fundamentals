# makefile to build a program

findName: findName.o
	g++ findName.o -o findName

# makes runnable
findName.o:	findName.cpp
	g++ -c findName.cpp

#removes o files
clean:
	/bin/rm -f *.o

#Creates backup and submission file
backup:
	tar cvf bgrose.findname.tar findName.cpp Makefile readme findName.sh
