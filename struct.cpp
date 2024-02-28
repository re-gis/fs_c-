#include<iostream>
#include<string>
using namespace std;

struct Student {
	int id;
	string name;
	int marks;
	
	void printDetails(){
		cout<<"Roll: " <<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Marks: "<<marks<<endl;
	}
}st2, st3;

int main(){
	Student st;
	st.id = 1;
	st.name = "Regis";
	st.marks = 50;
	
	st.printDetails();
	st3.id = 2;
	st3.name = "Irumva";
	st3.marks = 4;
	st3.printDetails();
	
	st2 = {3, "Dmc", 100};
	st2.printDetails();
	
	struct Student student;
	cout<<"Enter the student id: ";
	cin>>student.id;
	cin.ignore();
	cout<<"\nEnter the name: ";
	cin>>student.name;
	cin.ignore();
	cout<<"\nEnter the marks: ";
	cin>>student.marks;
	cin.ignore();
	student.printDetails();
	return 0;
}
