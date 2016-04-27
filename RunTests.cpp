#include "RunTests.h"
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <vector>

RunTests::RunTests(){

}

bool RunTests::checkIsEmptyOnEmpty() const{

	LinkedList<int> l1;
	return l1.isEmpty();
}

bool RunTests::checkIsEmptyOnNonEmpty() const{

	LinkedList<int> l1;
	l1.addFront(1);

	return !l1.isEmpty();
}

bool RunTests::checkSizeOnEmpty() const{

	LinkedList<int> l1;
	return l1.size() == 0;
}

bool RunTests::checkSizeOnNonEmpty() const{

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	return l1.size() == 5;
}

bool RunTests::checkSearchOnEmpty() const{

	LinkedList<int> l1;

	return !l1.search(1);
}
	
bool RunTests::checkSearchOnNonEmptyExistsFront() const{

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	return l1.search(4);
}

bool RunTests::checkSearchOnNonEmptyExistsBack() const{

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	return l1.search(0);
}

bool RunTests::checkSearchOnNonEmptyExistsMiddle() const{

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	return l1.search(3);
}

bool RunTests::checkSearchOnNonEmptyDoesNotExist() const{

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	return !l1.search(12);

}
	
bool RunTests::checkAddBackOnEmpty(){

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addBack(i);
	}

	//std::cout << l1.toVector().back();

	return l1.toVector().back() == 4;

}

bool RunTests::checkAddBackOnNonEmpty(){

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	l1.addBack(10);
	return l1.toVector().back() == 10;
}
	
bool RunTests::checkAddFrontOnEmpty(){

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	//std::cout << l1.toVector().front();

	return l1.toVector().front() == 4;
}

bool RunTests::checkAddFrontOnNonEmpty(){

	//use vector to push values instead?

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addBack(i);
	}

	l1.addFront(10);
	return l1.toVector().front() == 10;

}

bool RunTests::checkRemoveBackOnEmpty(){

	LinkedList<int> l1;

	int prevSize = l1.size();

	l1.removeBack();

	return prevSize == l1.size();

}	

bool RunTests::checkRemoveBackOnNonEmpty(){

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	
	int tempSize = l1.toVector().size();
	int tempBack = l1.toVector().back();
	int newBack = l1.toVector().at(tempSize-2);

	std::cout << tempSize << "\n";
	std::cout << tempBack << "\n";
	std::cout << newBack << "\n";

	l1.removeBack();
	if ((tempSize > l1.toVector().size()) && (tempBack != l1.toVector().back()) && (newBack == l1.toVector().back())){
		return true;
	}
	else { return false; }

}

bool RunTests::checkRemoveFrontOnEmpty(){

	LinkedList<int> l1;

	int prevSize = l1.size();

	l1.removeBack();

	return prevSize == l1.size();
}

bool RunTests::checkRemoveFrontOnNonEmpty(){

	LinkedList<int> l1;

	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	
	int tempSize = l1.toVector().size();
	int tempFront = l1.toVector().front();
	int newFront = l1.toVector().at(1);

	std::cout << tempSize << "\n";
	std::cout << tempFront << "\n";
	std::cout << newFront << "\n";

	l1.removeFront();
	if ((tempSize > l1.toVector().size()) && (tempFront != l1.toVector().front()) && (newFront == l1.toVector().front())){
		return true;
	}
	else { return false; }
}
