#include <stdio.h>

#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if ((int)number % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}

int main(int argc, char *argv[])
{
	std::cout << "You have entered " << argc
		<< " arguments:" << "\n";

	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << "\n";

	int  number = -13;
	//std::cout<<"Enter something" <<std::endl;
	//std::cin >> number;

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//		

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
	}
	
	// TODO(Gusti): i don't know why this doesn't work, but someone please FIX it.
	// --------------- start

	// Get the first argument
	std::string argumentAsString = argv[0];
	const char* argumentAsCharArray = argumentAsString.c_str(); 
	try {
		number = std::stoi(argv[1]);
		printOddOrEven(number);
	}
	catch (...) {
		printf("No \n");
	}
	//number = argv[1]; // No
	//should use atoi? c
	// or std::stoi? c++

	//std::cout << argumentAsString << std::endl; // i think this should be removed

	// --------------- stop

//printOddOrEven(number);

	return 0;
}