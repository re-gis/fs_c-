#include<iostream>
#include<string>
using namespace std;

int main () {
	int day;
	cout << "Enter the day: " << endl;
	cin >> day;
	
	switch(day) {
		case 1:
			cout << "Lundi" << endl;
			break;
		case 2: 
			cout << "Mardi" << endl;
			break;
		case 3:
			cout << "Mercredi" << endl;
			break;
		case 4:
			cout << "Jeudi" << endl;
			break;
		case 5:
			cout << "Vendredi" << endl;
			break;
		case 6:
			cout << "Samedi" << endl;
			break;
		case 7:
			cout << "Dimanche" << endl;
			break;
		default:
			cout << "No day found" << endl;
		
	}
	return 0;
}
