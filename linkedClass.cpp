#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};


void printDetails(Node* head){
	while(head != NULL){
		cout<<head->data<<endl;
		head = head->next;
	}
	
	cout<<"Null..."<<endl;
}


int main(){
	Node* head;
	Node* second;
	Node* third;
	Node* forth;
	
	head = new Node();
	second = new Node();
	third = new Node();
	forth = new Node();
	
	head->data = 1;
	head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = forth;
	forth->data = 4;
	forth->next = NULL;
	
	printDetails(head);
	
	return 0;
}
