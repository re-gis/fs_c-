#include<iostream>
using namespace std;

void createSquare(){
	for(int i=1;i<=5;i++){
		for(int y=1;y<=5;y++){
			cout<<"*";
		}
		cout<<endl;
	}	
}


void createPyramid(){
	for(int i=1;i<=5;i++){
		for(int y=1;y<=10;y++){
			if(
			(i==1 && (y==1 || y==2 || y==3 || y==4 || y==6 || y==7 || y==8 || y==9 || y==10 )) ||
			(i==2 && (y==1 || y==2 || y==3 || y==7 || y==8 || y==9 || y==10 )) ||
			(i==3 && (y==1 || y==2 || y==8 || y==9 || y==10 )) ||
			(i==4 && (y==1 || y==9 || y==10)) ||
			(i==5 && (y=10))
			) {
				cout<<" ";
			} else {
				cout<<"*";
			}
		}
		cout<<endl;
	}
}


void createTriOne(){
	for(int i=1;i<=5;i++){
		for(int y=1;y<=5;y++){
			if(i>=y){
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
}


void createTriTwo(){
	for(int i=1;i<=5;i++){
		for(int y=1;y<=5;y++){
			if(i<=y){
				cout<<"*";
			} else {
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
}



void createTriThree(){
	for(int i=1;i<=5;i++){
		for(int y=1;y<=5;y++){
			if(
				i==1 &&(y>i+3) ||
				i==2 && (y>i+1) ||
				i==3 &&(y>=i) 
			){
				cout<<"*";
			} else {
				cout<<"1";
			}
		}
		
		cout<<endl;
	}
}

int main() {
	
	cout<<"This is a square pattern: " <<endl;
	createSquare();
	
	cout<<"This is a pyramid pattern: "<<endl;
	createPyramid();
	
	
	cout<<"This is a first triangle pattern: "<<endl;
	createTriOne();
	
	
	cout<<"This is a second triangle: " <<endl;
	createTriTwo();
	
	
	cout<<"This is a third triangle: "<<endl;
	createTriThree();
	return 0;
}
