 /*
	Daryl Newell
 Date:  02/13/17
 Compiled with clang c++ 11
 Description:
Write a C program to determine whether the password chosen by a user is
invalid, weakest, weak, strong or strongest.
 Password                                                       Message
------------------------------------------------------------------------
If password contains all lowercase or uppercase alphabets       Weakest
If password contains only digits                                Weakest
If password is combination of digits and alphabets              Weak
If password is combination digits and capital along -
	 with small alphabets 										Strong
If it is combination of digits, small/capital alphabets -
	 with special characters 									Strongest
If password contains less than 6 characters                     Invalid
If password contains space                                      Invalid
-----------------------------------------------------------------------
*/ // --------------------End Description and parameters ---------------


#include <stdio.h>
#include <conio.h>	// for clrscr() function
#include <ctype.h>  // for islower, isupper, isdigit, ispunct, etc
#include <iostream>

using namespace std;

// -------------------------- Function Declarations ------------------------
int GetPw(char *pWord);
int PwTest(char *pWord, int size);
void Results(int strength);
// -------------------------- End Function Declarations --------------------

const int pwLength = 26;    // maximum password size allowed to be entered

 int _tmain(int argc, _TCHAR* argv[])
{
	char pWord[pwLength]; // password array
	int iPwSize = 0;      // actual size of the password entered
	int strength = 0; 	  // strength rating reterned from PwTest ( 0 - 4 )

	cout << "Enter your password: ";
	iPwSize = GetPw(pWord);
	  // this will return the actual size of the password entered
	  // and store that in "iPwSize" now I can pass this to other
	  // functions for further testing and manipulations

	strength = PwTest(pWord, iPwSize);	// call the test function.
	Results(strength);					// call the Result function.

	// I just put this in for testing so I could verify what I typed.
	cout << endl << "You Entered \"" << pWord << "\"" << endl;


	getch();
	return 0;
}
