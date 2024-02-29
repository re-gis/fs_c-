#include<iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};


void printDetails(Node* head){
	while(head != NULL)
	{
		cout<<head->data<<endl;
		head = head->next;
	}
	
	cout<<"nullll"<<endl;
}

int main(){
	Node* first = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	first = new Node();
	second = new Node();
	third = new Node();
	
	first->data = 1;
	first->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = NULL;
	
	printDetails(first);
	return 0;
}
