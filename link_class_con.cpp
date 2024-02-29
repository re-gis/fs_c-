#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node(int data){
			this->data = data;
			next = NULL;
		}
};


void display(Node* head){
	while(head != NULL){
		cout<<head->data<<endl;
		head = head->next;
	}
	
	cout<<"Null..."<<endl;
}

int main(){
	Node head(1);
	Node second(2);
	Node third(3);
	
	head.next = &second;
	
	Node* h = &head;
	second.next = &third;
	display(h);
	return 0;
}
