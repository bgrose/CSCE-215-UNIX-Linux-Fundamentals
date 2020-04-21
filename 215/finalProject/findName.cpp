/*
* Writen by Bradley Grose for CSCE215 on 4/20/2020
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{

	if(argc == 2) //Means one argument sent in
	{ 
        	char String[255];
        	sprintf(String, "./findName.sh %s", argv[1]); //runs the command and saves to string
		//Returns that output to the command line
 		system(String);
	}
	else //Too many arguments
	{
		cerr << "Command line arguments are not equal to 1" << endl;
		return 1;
	}
}
