#include<iostream>
#include<string>
using namespace std;


int main(){
	int inAm, rate;
	int pTime;
	string fname;
	
	cout<<"Enter your full name: "<<endl;
	getline(cin, fname);
	
	cout<<"Enter your initial amount: "<<endl;
	cin>>inAm;
	
	cout<<"Enter the interest rate: "<<endl;
	cin>>rate;
	
	cout<<"Enter your payment time: "<<endl;
	cin>>pTime;
	
	int interest = (inAm * rate * pTime)/100;
	cout<<"Hello "<<fname<< "!"<<endl;
	cout<<"Here are your details: "<<endl;
	cout<<"Initial Amount: "<<inAm<<endl;
	cout<<"Rate: "<<rate<<endl;
	cout<<"Payment time: "<<pTime<<endl;
	cout<<"__________________"<<endl;
	cout<<"Profit: $"<<interest<<endl;
	
	return 0;
}
