/*
* Use stdi from keyboard
*	Can use either built-in arrays or array class
*	Read in 5 INTEGERS into array
*	Loop through the array of ints, and print out TWICE the amount
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{

	const int ARRAY_SIZE = 5;

	array<int, ARRAY_SIZE> myIntArray{};

	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << "Please enter in an integer: ";
		cin >> myIntArray[i];
	}

	cout << "The doubled amounts of input values: " << endl;
	//Loop to print out values
	for (int a : myIntArray){
		cout << a * 2 << endl;
	}

	return 0;

}