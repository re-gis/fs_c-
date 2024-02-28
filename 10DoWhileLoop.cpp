#include<iostream>
#include<string>
using namespace std;

int main () {
	int x;
	cout << "Enter times to print hello:" << endl;
	cin >> x;
	do{
		cout << "Hello" << endl;
		x--;
	} while (x > 0);
	return 0;
}
