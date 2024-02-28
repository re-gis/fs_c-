#include <iostream>


namespace MyNamespace {
	int insideNamespace = 10;
	int cout() {
		return insideNamespace;
	}
}


int myGlobal = 24;

int cout() {
	return myGlobal;
}


int main() {
	int local = 7;
	
	std::cout<<"The local variable cout is: " << local <<std::endl;
	std::cout<<"The variable in user defined namespace is: "<<MyNamespace::insideNamespace<<std::endl;
	std::cout<<"The output of cout() in user defined namespace is: "<<MyNamespace::cout()<<std::endl;
	std::cout<<"The value of myGlobal is: "<<myGlobal<<std::endl;
	std::cout<<"The output of global cout() is: "<<cout()<<std::endl;
	return 0;
}

