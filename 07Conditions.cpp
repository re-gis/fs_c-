#include<iostream>
#include<string>
using namespace std;

int main () {
	int x;
	cout << "Enter your age" << endl;
	cin >> x;
	if(x < 18) {
		cout << "You are under 18 years" << endl;
	} else if (x > 18) {
		cout << "You are above 18 years" << endl;
	} else if(x = 18){
		cout << "You are 18 years" << endl;
	} else {
		cout << "You have undefined age" << endl;
	}
	
	// Short-hand syntax
	 x > 18 ? cout << "You are above 18 years" << endl : (x < 18 ? cout << "You are under 18 years" << endl : cout << "You are 18 years" << endl);
	
	
	
	return 0;
}
