#include<iostream>
#include<string>
using namespace std;

class Node{
	public:
	string value;
	Node* next;
};

int main (){
	// linked lists
	Node* head;
	Node* one=NULL;
	Node* two=NULL;
	Node* three=NULL;
	
	one = new Node();
	two=new Node();
	three=new Node();
	
	one->value="This is the first node";
	two->value="This is the second node";
	three->value="This is the third node";
	
	// connect the nodes
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	head=one;
	// Display the output
	while(head!=NULL){
		cout<<head->value<<endl;
		head=head->next;
	}
	return 0;
}
