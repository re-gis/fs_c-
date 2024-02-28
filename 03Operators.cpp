#include<iostream>
#include<string>
using namespace std;

int main () {
	// Arithmetic operations
	int x = 10 + 4;
	cout << "The sum is: " << x << endl;
	
	// Assignment operators
	x += 10;
	cout << "The result of x is: " << x << endl;
	
	// Comparison operators
	int y = 4;
	int a = 5;
	
	string myResult = y > a ? "false" : "true";
	cout << "If y is less than a then: " << myResult << endl;
	
	
	// Logical operators
	int firstNum = 5 < 3;
	int secondNum = 6 > 3;
	bool result = !(firstNum && secondNum);
	
	cout << result << endl;
	
	
	return 0;
	
}
