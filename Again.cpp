#include<iostream>
#include<string>
using namespace std;

class Node{
	public:
	string name;
	Node* next;
};

int main(){
	// Linked lists
	Node* head=NULL;
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	
	one = new Node();
	two = new Node();
	three = new Node();	
	
	
	// Assign values
	one->name = "Regis";
	two->name = "Remmy";
	three->name= "Moses";
	
	// Connect nodes
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	head = one;
	int index=0;
	// Output the values
	while(head!=NULL){
		cout<<head->name<<endl;
		cout<<index<<endl;
		head=head->next;
		index++;
	}
	return 0;
}
