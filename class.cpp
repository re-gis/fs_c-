#include<iostream>
#include<string>

using namespace std;

class Person{
	string name;
	string country;
	int age;
	
	
	public:
		void set_values(string, string, int);
	
	public:
		string get_name();
		
	public:
		string get_country();
	
	public:
		int get_age();
};

void Person::set_values(string name, string country, int age) {
	this->age = age;
	this->country = country;
	this->name = name;
}

string Person::get_name(){
	return name;
}

int Person::get_age(){
	return age;
}

string Person::get_country(){
	return country;
}

int main(){
	
	Person prsn;
	prsn.set_values("Irumva", "Rwanda", 18);
	cout<<"Person: "<<prsn.get_name()<<" whose age is: "<< prsn.get_age() << " lives in: " << prsn.get_country()<<endl;
	
	return 0;
}
