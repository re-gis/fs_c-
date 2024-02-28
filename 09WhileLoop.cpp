#include<iostream>
#include<string>
using namespace std;

int main () {
	int x;
	cout << "Enter times to print hello" << endl;
	cin >> x;
	while(x > 0) {
		cout << "Hello" << endl;
		x--;
	}
	return 0;
}

