#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{

	if(argc == 2)
	{ 
        	char String[255];
        	sprintf(String, "./findName.sh %s", argv[1]);
		//Returns that output to the command line
 		system(String);
	}
	else
	{
		cerr << "This is not the correct number of arguments" << endl;
		return 1;
	}
}
