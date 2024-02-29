#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		int id;
		string names;
		Student* next;
		
		Student(int id, string names){
			this->id = id;
			this->names = names;
			next = NULL;
		}
};

void display(Student* st){
	while(st != NULL){
		cout<<"Student: " << st->id << " names: " << st->names<<endl;
		st = st->next;
	}
}


int getLength(Student* head){
	int count = 0;
	while(head != NULL){
		count++;
		head = head->next;
	}
	
	return count;
}


int getByRecursion(Student* head){
	if(head == NULL){
		return 0;
	}else {
		return 1 + getByRecursion(head->next);
	}
}


void addFirst(Student **head){
	Student *newStudent = new Student(0, "new student");
	newStudent->next = *head;
	*head = newStudent;
}

int main(){
	Student* st = new Student(1, "Irumva");
	Student* st2 = new Student(2, "Regis");
	Student* st3 = new Student(3, "Dmc");
	st->next = st2;
	st2->next = st3;
	display(st);
	cout<<getByRecursion(st);
	
	addFirst(&st);
	cout<<"_________________"<<endl;
	display(st);
	return 0;
}
