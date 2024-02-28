#include<iostream>
#include<string>
using namespace std;


class Person{
	string name;
	
	public:
	Person(string n):name(n){
		if(name == ""){
		name="Unknown";
		}
	}
	
	
	void set_name(string n) {
		this->name = n;
	}
	
	string get_name() {
		return name;
	}
};




int main() {
	string name;
	cout<<"Enter your name: "<<endl;
	getline(cin, name);
	Person prsn(name);
	cout<<prsn.get_name()<<endl;
	return 0;
}
