#include "RunTests.h"
#include "LinkedList.h"
#include "Node.h"
#include <iostream>
#include <vector>

RunTests::RunTests(){

	std::cout << "\nTest isEmpty()";
	std::cout << "\n----------------------------------------------------\n";

	checkIsEmptyOnEmpty();
	checkIsEmptyOnNonEmpty();

	std::cout << "\nTest size()";
	std::cout << "\n----------------------------------------------------\n";
	
	checkSizeOnEmpty();
	checkSizeOnNonEmpty();

	std::cout << "\nTest search()";
	std::cout << "\n----------------------------------------------------\n";

	checkSearchOnEmpty();
	checkSearchOnNonEmptyExistsBack();
	checkSearchOnNonEmptyExistsFront();
	checkSearchOnNonEmptyExistsMiddle();
	checkSearchOnNonEmptyDoesNotExist();

	std::cout << "\nTest addBack()";
	std::cout << "\n----------------------------------------------------\n";

	checkAddBackOnEmpty();
	checkAddBackOnNonEmpty();

	std::cout << "\nTest addFront()";
	std::cout << "\n----------------------------------------------------\n";

	checkAddFrontOnEmpty();
	checkAddFrontOnNonEmpty();

	std::cout << "\nTest removeBack()";
	std::cout << "\n----------------------------------------------------\n";

	checkRemoveBackOnEmpty();
	checkRemoveBackOnNonEmpty();

	std::cout << "\nTest removeFront()";
	std::cout << "\n----------------------------------------------------\n";

	checkRemoveFrontOnEmpty();
	checkRemoveFrontOnNonEmpty();

}

void RunTests::checkIsEmptyOnEmpty(){

	std::cout << "Check is empty on empty list";
	LinkedList<int> l1;

	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { failed(); }

	std::cout << "Expected Return:  " << l1.toVector().empty() << "\nActual Return: " << l1.isEmpty() << "\n\n";
}

void RunTests::checkIsEmptyOnNonEmpty(){

	std::cout << "Check is empty on non empty";
	LinkedList<int> l1;
	l1.addFront(1);

	LinkedList<int> l2;
	l2.toVector().insert(l2.toVector().begin(),1);

	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { failed(); }
	std::cout << "Expected Return: " << l1.toVector().empty() << "\nActual Return: " << l1.isEmpty() << "\n\n";

}

void RunTests::checkSizeOnEmpty(){

	std:: cout << "Check size on empty";
	LinkedList<int> l1;

	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
	std::cout << "Expected Size: " << l1.toVector().size() << "\nActual Size: " << l1.size() << "\n\n";
}

void RunTests::checkSizeOnNonEmpty(){

	std:: cout << "Check is size on non empty";
	LinkedList<int> l1;
	LinkedList<int> l2;
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l2.toVector().insert(l2.toVector().begin(),i);
	}

	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
	std::cout << "Expected Size: " << l1.toVector().size() << "\nActual Size: " << l1.size() << "\n\n";
}

void RunTests::checkSearchOnEmpty(){

	std:: cout << "Check search on empty";
	int valueToSearch = 1;

	LinkedList<int> l1;

	if (!(l1.search(valueToSearch) == valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: False" << "\nActual Return: True \n\n";
}
	
void RunTests::checkSearchOnNonEmptyExistsFront(){

	std:: cout << "Check search in front on non empty";
	int valueToSearch = 4;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: False \n\n";
}

void RunTests::checkSearchOnNonEmptyExistsBack(){

	std:: cout << "Check search in back on non empty";
	int valueToSearch = 0;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: False \n\n";
}

void RunTests::checkSearchOnNonEmptyExistsMiddle(){

	std:: cout << "Check search in middle on non empty";
	int valueToSearch = 3;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}

	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: False \n\n";
}

void RunTests::checkSearchOnNonEmptyDoesNotExist(){

	std:: cout << "Check search on non empty when value doesn't exist";
	int valueToSearch = 12;

	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	if (!l1.search(valueToSearch)) { passed(); }
	else { failed(); }

	std::cout << "Expected Return: False" << "\nActual Return: True \n\n";

}
	
void RunTests::checkAddBackOnEmpty(){

	std:: cout << "Check add back on empty list";
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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkAddBackOnNonEmpty(){

	// do I really need this...?

	std:: cout << "Check add back on non empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}
	
void RunTests::checkAddFrontOnEmpty(){

	std:: cout << "Check add front on empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkAddFrontOnNonEmpty(){

	std:: cout << "Check add front on non empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveBackOnEmpty(){

	std:: cout << "Check remove back on empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}	

void RunTests::checkRemoveBackOnNonEmpty(){

	std:: cout << "Check remove back on non empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveFrontOnEmpty(){

	std:: cout << "Check remove front on empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveFrontOnNonEmpty(){

	std:: cout << "Check remove front on non empty list";

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

	std::cout << "Expected List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l2.toVector().at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l2.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";

}

void RunTests::passed(){
	std::cout << " [PASSED]\n";
}

void RunTests::failed(){
	std::cout << " [FAILED]\n";
}
