#include<iostream>
#include<string>
using namespace std;

int main () {
	string myString = "Hello world...";
	cout << "My string is: " << myString << endl;
	
	
	// Concatination of strings
	string firstName = "Regis ";
	string secondName = "Dmc";
	
	cout << "My fullname is: " << secondName + " " + firstName << endl;
	
	// Appending
	string fullName2 = firstName.append(secondName);
	cout << "The result using appending is: " << fullName2 << endl;
	
	
	// Length of the string
	cout << "The length of the string is: " << fullName2.size() << endl; // using size() 
	cout << "The length of the string is: " << fullName2.length() << endl; // using length()
	
	// Accessing the strings
	cout << "The character at index 0 is: " << fullName2[0] << endl;
	
	// Changing the characters
	fullName2[0] = 'd';
	cout << "The new fullname is: " << fullName2 << endl;
	
	// Special characters
	cout << "This is a special character \"" << endl;
	
	
	// Input strings
	string inputString;
	cout << "Enter your name: " << endl;
	cin >> inputString;
	cout << "Your name is: " << inputString << endl; // only one string
	
	string FullName;
	cout << "Now enter your fullname" << endl;
	getline(cin, FullName);
	cout << "Your fullname is: " << FullName << endl; // getting many strings
	
	
	return 0;
}
