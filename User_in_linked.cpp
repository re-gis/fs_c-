#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		int id;
		string names;
		Student* next;
		
		Student(int id, string names){
			this->names = names;
			this->id = id;
			next = NULL;
		}
};

void display(Student* head){
	while(head != NULL){
		cout<<"Student " << head->id << " names: "<<head->names<<endl;
		head = head->next;
	}
	cout<<"Null..."<<endl;
}


void addFirst(Student **head, int id, string names){
	Student *newStudent = new Student(id, names);
	newStudent->next = *head;
	*head = newStudent;
}

int main(){
	int count = 0;
	cout<<"How many students you want: "<<endl;
	cin>>count;
	cin.ignore();
	Student* student = NULL;
	for(int i=1;i<=count;i++){
		int id = 0;
		string names;
		cout<<"Enter " << i << " student: "<<endl;
		cout<<"ID: "<<endl;
		cin>>id;
		cin.ignore();
		cout<<"Names: "<<endl;
		getline(cin, names);
		
		
		addFirst(&student, id, names);
	}
	
	display(student);
	
	return 0;
}
