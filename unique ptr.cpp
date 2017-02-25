//============================================================================
// Name        : unique.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;


void Test(unique_ptr<int[]> &spaceCount, int maxSpace);

int main() {

	int i = 0;

	int maxSpaceSize = 10;

	unique_ptr<int[]> arry (new int[maxSpaceSize]());
	for (i = 0; i < maxSpaceSize; i++) {
			arry[i] = i;
			cout << arry[i];
			cout << endl;
		        }

	cout << endl << &arry << endl;
	Test(arry, maxSpaceSize);

	return 0;
}

void Test(unique_ptr<int[]> &spaceCount, int maxSpace)
{
	int i = 0;

	for (i = 0; i < maxSpace; i++){

		cout << spaceCount[i] << endl;
		}
   spaceCount.reset(nullptr);
}
