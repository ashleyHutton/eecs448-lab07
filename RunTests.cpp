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

	// use vector here??
	return true;

}
	
bool RunTests::checkAddBackOnNonEmpty(){

return true;
}
	
bool RunTests::checkAddFrontOnEmpty(){
return true;

}

bool RunTests::checkRemoveBackOnEmpty(){
return true;

}	

bool RunTests::checkRemoveBackOnNonEmpty(){
return true;

}

bool RunTests::checkRemoveFrontOnEmpty(){

return true;
}

bool RunTests::checkRemoveFrontOnNonEmpty(){

return true;
}