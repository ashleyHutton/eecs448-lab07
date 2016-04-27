#include "RunTests.h"
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <vector>

RunTests::RunTests(){

	std::cout << "\nTest isEmpty()";
	std::cout << "\n----------------------------------------------------\n";

	std::cout << "Check is empty on empty list";
	checkIsEmptyOnEmpty();

	std::cout << "Check is empty on non empty";
	checkIsEmptyOnNonEmpty();

	std::cout << "\nTest size()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check size on empty";
	checkSizeOnEmpty();

	std:: cout << "Check is size on non empty";
	checkSizeOnNonEmpty();

	std::cout << "\nTest search()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check search on empty";
	checkSearchOnEmpty();

	std:: cout << "Check search in back on non empty";
	checkSearchOnNonEmptyExistsBack();

	std:: cout << "Check search in front on non empty";
	checkSearchOnNonEmptyExistsFront();

	std:: cout << "Check search in middle on non empty";
	checkSearchOnNonEmptyExistsMiddle();

	std:: cout << "Check search on non empty when value doesn't exist";
	checkSearchOnNonEmptyDoesNotExist();

	std::cout << "\nTest addBack()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check add back on empty list";
	checkAddBackOnEmpty();

	std:: cout << "Check add back on non empty list";
	checkAddBackOnNonEmpty();

	std::cout << "\nTest addFront()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check add front on empty list";
	checkAddFrontOnEmpty();

	std:: cout << "Check add front on non empty list";
	checkAddFrontOnNonEmpty();

	std::cout << "\nTest removeBack()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check remove back on empty list";
	checkRemoveBackOnEmpty();

	std:: cout << "Check remove back on non empty list";
	checkRemoveBackOnNonEmpty();

	std::cout << "\nTest removeFront()";
	std::cout << "\n----------------------------------------------------\n";

	std:: cout << "Check remove front on empty list";
	checkRemoveFrontOnEmpty();

	std:: cout << "Check remove front on non empty list";
	checkRemoveFrontOnNonEmpty();

}

void RunTests::checkIsEmptyOnEmpty(){

	LinkedList<int> l1;

	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { 
		failed();
		std::cout << "Expected Size: 0\nActual Size: " + l1.toVector().size() + "\n\n";
	}
}

void RunTests::checkIsEmptyOnNonEmpty(){

	LinkedList<int> l1;
	l1.addFront(1);

	LinkedList<int> l2;
	l2.toVector().insert(l2.toVector().begin(),1);

	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { failed(); }
}

void RunTests::checkSizeOnEmpty(){

	LinkedList<int> l1;
	
	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
}

void RunTests::checkSizeOnNonEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l2.toVector().insert(l2.toVector().begin(),i);
	}

	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
}

void RunTests::checkSearchOnEmpty(){

	int valueToSearch = 1;

	LinkedList<int> l1;

	if (!(l1.search(valueToSearch) == valueToSearch)) { passed(); }
	else { failed(); }
}
	
void RunTests::checkSearchOnNonEmptyExistsFront(){

	int valueToSearch = 4;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
}

void RunTests::checkSearchOnNonEmptyExistsBack(){

	int valueToSearch = 0;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
}

void RunTests::checkSearchOnNonEmptyExistsMiddle(){

	int valueToSearch = 3;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
}

void RunTests::checkSearchOnNonEmptyDoesNotExist(){

	int valueToSearch = 12;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (!l1.search(valueToSearch)) { passed(); }
	else { failed(); }

}
	
void RunTests::checkAddBackOnEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addBack(i);
		l2.toVector().push_back(i);
	}

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed();
			return;
		}
	}
	passed();
}

void RunTests::checkAddBackOnNonEmpty(){

	// do I really need this...?

	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addBack(i);
		l2.toVector().push_back(i);
	}

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
		}
	}
	passed();
}
	
void RunTests::checkAddFrontOnEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l2.toVector().insert(l2.toVector().begin(),i);
	}

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed();
			return;
		}
	}
	passed();
}

void RunTests::checkAddFrontOnNonEmpty(){

	// do i really need this?

	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l2.toVector().insert(l2.toVector().begin(),i);
	}

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
			return;
		}
	}
	passed();
}

void RunTests::checkRemoveBackOnEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;

	l1.removeBack();
	l2.toVector().pop_back();

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
			return;
		}
	}
	passed();
}	

void RunTests::checkRemoveBackOnNonEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;

	for (int i=0; i<5; i++){
		l1.addBack(i);
		l2.toVector().push_back(i);
	}

	l1.removeBack();
	l2.toVector().pop_back();

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
			return;
		}
	}
	passed();
}

void RunTests::checkRemoveFrontOnEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;

	l1.removeFront();
	l2.toVector().pop_back();

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
			return;
		}
	}
	passed();
}

void RunTests::checkRemoveFrontOnNonEmpty(){

	LinkedList<int> l1;
	LinkedList<int> l2;

	for (int i=0; i<5; i++){
		l1.addFront(i);
		if (i != 0){
			l2.toVector().insert(l2.toVector().begin(),i);
		}
	}

	l1.removeFront();

	for (int j=0; j<l2.toVector().size(); j++){
		if (l1.toVector().at(j) != l2.toVector().at(j)){ 
			failed(); 
			return;
		}
	}
	passed();
}

void RunTests::passed(){
	std::cout << " [PASSED]\n";
}

void RunTests::failed(){
	std::cout << " [FAILED]\n";
}
