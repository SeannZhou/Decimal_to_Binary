/*
	Sean Zhou
	Description: converting decimal numbers to binary.
*/

#include<iostream>
#include<string>
using namespace std;

int main() { 
	int decimal;	//Input
	int digit;	//Used to break number down and convert
	string result;	//Output after concatenating 

	cout << "Decimal: ";
	cin >> decimal;

	while(decimal != 0) {		//Loop until decimal is completely broken down
		digit = decimal % 2;	//Mod and use remainder to make binary
		if(digit == 1)		//Concatenate to make result
			result = "1" + result;
		else
			result = "0" + result;
		
		decimal /= 2;		//Breaking down
	}
	
	cout << "Binary: " + result << endl;	//Output

	return 0;
}
