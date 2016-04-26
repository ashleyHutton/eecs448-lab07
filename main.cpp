#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <vector>

/*
	BUGS:
	1) List starts with size = 1 instead of size = 0
	2) Cannot add back with negative numbers...?

*/

bool checkAddFront(LinkedList<int> l1){

	l1.addFront(3);
	l1.addFront(1234);
	l1.addFront(-543);
	l1.addFront(0);
	l1.addFront(12);

	if (l1.isEmpty()){ 
		std::cout << "List should not be empty\n"; 
		return false; 
	}
	if (l1.size() != 5) { 
		std::cout << "Size should be 5\n"; 
		std::cout << "Size is: " << l1.size() << "\n";
		//return false; 
	}

	if (!l1.search(3)) { 
		std::cout << "Could not find 3\n"; 
		return false; 
	}
	if (!l1.search(1234)) { 
		std::cout << "Could not find 1234\n"; 
		return false; 
	}
	if (!l1.search(-543)) { 
		std::cout << "Could not find -543\n"; 
		return false; 
	}
	if (!l1.search(0)) { 
		std::cout << "Could not find 0\n"; 
		return false;
	 }
	if (!l1.search(12)) {
		std::cout << "Could not find 12\n"; 
		return false;
	 }

	//std::vector list = l1.toVector();
	//std::cout << list;

	return true;

}

bool checkAddBack(LinkedList<int> l2){

	std::cout << "Size starts as: " << l2.size() << "\n";

	l2.addBack(32);
	l2.addBack(-3);
	l2.addBack(12);
	l2.addBack(32);
	l2.addBack(3);

	if (l2.isEmpty()){ 
		std::cout << "List should not be empty\n"; 
		return false;
	 }
	if (l2.size() != 5) { 
		std::cout << "Size should be 5\n"; 
		std::cout << "Size is: " << l2.size() << "\n";
		//return false; 
	}

	if (!l2.search(32)) { 
		std::cout << "Could not find 32\n"; 
		return false; 
	}
	if (!l2.search(-3)) { 
		std::cout << "Could not find -3\n"; 
		return false; 
	}
	if (!l2.search(12)) { 
		std::cout << "Could not find 12\n"; 
		return false; 
	}
	if (!l2.search(3)) { 
		std::cout << "Could not find 3\n"; 
		return false;
	 }

	//std::vector list = l2.toVector();
	//std::cout << list;

	return true;
}

bool checkRemoveFront(LinkedList<int> l1){

	l1.removeFront();
	l1.removeFront();
	l1.removeFront();
	l1.removeFront();
	l1.removeFront();

	if (l1.isEmpty()){ 
		return true; 
	}

	std::cout << "List should be empty on remove front\n";
	std::cout << "Size is: " << l1.size() << "\n";
	return false;

}

bool checkRemoveBack(LinkedList<int> l2){

	l2.removeBack();
	l2.removeBack();
	l2.removeBack();
	l2.removeBack();
	l2.removeBack();

	if (l2.isEmpty()){ 
		return true; 
	}

	std::cout << "list should be empty on remove back\n";
	std::cout << "Size is: " << l2.size() << "\n";
	return false;

}

string runTests(){

	LinkedList<int> l1;
	LinkedList<int> l2;

	if (!checkAddFront(l1)){
		std::cout << "Error in add front.\n";
	}
	if (!checkAddBack(l2)){
		std::cout << "Error in add back.\n";
	}
	if (!checkRemoveFront(l1)){
		std::cout << "Error in remove front.\n";
	}
	if (!checkRemoveBack(l2)){
		std::cout << "Error in remove back.\n";
	}

}


int main(){

	std::cout << "Testing...\n";
	std::cout << runTests();

}


// make a RunTests class





