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

	std::cout << "\nTest addFront()";
	std::cout << "\n----------------------------------------------------\n";

	checkAddFrontOnEmpty();

	std::cout << "\nTest addFront() and addBack()";
	std::cout << "\n----------------------------------------------------\n";

	checkAddBackAddFront();

	std::cout << "\nTest removeBack()";
	std::cout << "\n----------------------------------------------------\n";

	checkRemoveBackOnEmpty();
	checkRemoveBackOnNonEmpty();

	std::cout << "\nTest removeFront()";
	std::cout << "\n----------------------------------------------------\n";

	checkRemoveFrontOnEmpty();
	checkRemoveFrontOnNonEmpty();

	std::cout << "\nTest removeFront() and removeBack()";
	std::cout << "\n----------------------------------------------------\n";

	checkRemoveBackRemoveFront();

}

void RunTests::checkIsEmptyOnEmpty(){

	std::cout << "Check is empty on empty list";
	LinkedList<int> l1;

	// l1.isEmpty() should return true
	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { failed(); }

	std::cout << "Expected Return:  " << l1.toVector().empty() << "\nActual Return: " << l1.isEmpty() << "\n\n";
}

void RunTests::checkIsEmptyOnNonEmpty(){

	std::cout << "Check is empty on non empty";
	// add element to list
	LinkedList<int> l1;
	l1.addFront(1);

	// add element to vector
	LinkedList<int> l2;
	l2.toVector().insert(l2.toVector().begin(),1);

	// check if lists both return false
	if (l1.isEmpty() == l1.toVector().empty()){ passed(); }
	else { failed(); }
	std::cout << "Expected Return: " << l1.toVector().empty() << "\nActual Return: " << l1.isEmpty() << "\n\n";

}

void RunTests::checkSizeOnEmpty(){

	std:: cout << "Check size on empty";
	LinkedList<int> l1;

	// lists should both be of size 0
	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
	std::cout << "Expected Size: " << l1.toVector().size() << "\nActual Size: " << l1.size() << "\n\n";
}

void RunTests::checkSizeOnNonEmpty(){

	std:: cout << "Check is size on non empty";
	LinkedList<int> l1;
	LinkedList<int> l2;

	// add elements to lists
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l2.toVector().insert(l2.toVector().begin(),i);
	}
	// sizes should both be 5
	if (l1.size() == l1.toVector().size()){ passed(); }
	else { failed(); }
	std::cout << "Expected Size: " << l1.toVector().size() << "\nActual Size: " << l1.size() << "\n\n";
}

void RunTests::checkSearchOnEmpty(){

	std:: cout << "Check search on empty";
	int valueToSearch = 1;

	LinkedList<int> l1;

	// both should return false because the list is empty
	if (!(l1.search(valueToSearch) == valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: False" << "\nActual Return: False \n\n";
}
	
void RunTests::checkSearchOnNonEmptyExistsFront(){

	std:: cout << "Check search in front on non empty";
	int valueToSearch = 4;

	// add elements to list
	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	// search should return true
	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: True \n\n";
}

void RunTests::checkSearchOnNonEmptyExistsBack(){

	std:: cout << "Check search in back on non empty";
	int valueToSearch = 0;

	// add elements to list
	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	// search should return true
	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: True \n\n";
}

void RunTests::checkSearchOnNonEmptyExistsMiddle(){

	std:: cout << "Check search in middle on non empty";
	int valueToSearch = 3;

	// add elements to list
	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	// search should return true
	if (l1.search(valueToSearch)) { passed(); }
	else { failed(); }
	std::cout << "Expected Return: True" << "\nActual Return: True \n\n";
}

void RunTests::checkSearchOnNonEmptyDoesNotExist(){

	std:: cout << "Check search on non empty when value doesn't exist";
	int valueToSearch = 12;

	// add elements to list
	LinkedList<int> l1;
	for (int i=0; i<5; i++){
		l1.addFront(i);
	}
	// search should return false because element does not exist
	if (!l1.search(valueToSearch)) { passed(); }
	else { failed(); }

	std::cout << "Expected Return: False" << "\nActual Return: False \n\n";
}
	
void RunTests::checkAddBackOnEmpty(){

	std:: cout << "Check add back on empty list";
	bool isFailed = false;
	// create list and vector version of list
	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	// add elements to both lists
	for (int i=0; i<5; i++){
		l1.addBack(i);
		v1.push_back(i);
	}
	// check that each element at each index for both lists match 
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			// if elements at a particular index don't match, break
			isFailed = true;
			break;
		}
	}
	if (isFailed) { failed(); }
	else { passed(); }

	// print expected lists vs what was actually produced
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}
	
void RunTests::checkAddFrontOnEmpty(){

	std:: cout << "Check add front on empty list";
	// create list and vector version of list
	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	// add elements to front of both lists
	for (int i=0; i<5; i++){
		l1.addFront(i);
		v1.insert(v1.begin(),i);
	}
	// check that each element at each index for both lists match 
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			// if elements at a particular index don't match, return
			failed(); 
			return;
		}
	}
	passed();
	// print expected lists vs what was actually produced
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveBackOnEmpty(){

	std:: cout << "Check remove back on empty list";

	LinkedList<int> l1;
	// remove back should return false on empty list
	if (!l1.removeBack()) { passed(); }
	else { failed(); }

	std::cout << "Expected Return: 0 \nActual Return: " << l1.removeBack() << "\n\n";
}	

void RunTests::checkRemoveBackOnNonEmpty(){

	std:: cout << "Check remove back on non empty list";

	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	bool isFailed = false;
	// add elements to front of list
	for (int i=0; i<5; i++){
		l1.addFront(i);
		v1.insert(v1.begin(),i);
	}
	// remove from the back of the list
	l1.removeBack();
	v1.pop_back();
	// compare elements in the list 
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			isFailed = true; 
			break;
		}
	}

	if (isFailed) { failed(); }
	else { passed(); }
	// print the expected list versus the actual list
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveFrontOnEmpty(){

	std:: cout << "Check remove front on empty list";

	LinkedList<int> l1;
	// remove front should return false when removing from empty list
	if (!l1.removeFront()) { passed(); }
	else { failed(); }

	std::cout << "Expected Return: 0 \nActual Return: " << l1.removeFront() << "\n\n";
}

void RunTests::checkRemoveFrontOnNonEmpty(){

	std:: cout << "Check remove front on non empty list";

	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	bool isFailed = false;
	// add elements to front of list
	for (int i=0; i<5; i++){
		l1.addFront(i);
		if (i != 4){
			v1.insert(v1.begin(),i);
		}
	}
	// remove from front of list
	l1.removeFront();
	// compare elements in the list
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			isFailed = true;
			break;
		}
	}
	if (isFailed) { failed(); }
	else { passed(); }
	// print expected list versus actual list
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";

}

void RunTests::checkAddBackAddFront(){

	std:: cout << "Check add back and add front";
	bool isFailed = false;
	// create list and vector version of list
	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	// add elements to both front and back of list
	for (int i=0; i<5; i++){
		l1.addFront(i);
		l1.addBack(0);
		v1.insert(v1.begin(),i);
		v1.push_back(0);		
	}
	// compare elements in list
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			isFailed = true;
			break;
		}
	}

	if (isFailed) { failed(); }
	else { passed(); }
	// return actual list versus expected
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";
}

void RunTests::checkRemoveBackRemoveFront(){

	std:: cout << "Check remove back and remove front";

	LinkedList<int> l1;
	std::vector<int> v1 = l1.toVector();
	bool isFailed = false;
	// add elements to front of list
	for (int i=0; i<5; i++){
		l1.addFront(i);
		if (i != 4){
			v1.insert(v1.begin(),i);
		}
	}
	// remove from front and back once
	l1.removeFront();
	l1.removeBack();
	v1.pop_back();
	// compare lists
	for (int j=0; j<v1.size(); j++){
		if (l1.toVector().at(j) != v1.at(j)){ 
			isFailed = true;
			break;
		}
	}
	if (isFailed) { failed(); }
	else { passed(); }
	// print expected versus actual list	
	std::cout << "Expected List: ";
	for (int k=0; k<v1.size(); k++){
		std::cout << v1.at(k) << " ";
	}
	std::cout << "\nActual List: ";
	for (int k=0; k<l1.toVector().size(); k++){
		std::cout << l1.toVector().at(k) << " ";
	}
	std::cout << "\n\n";

}

void RunTests::passed(){
	// string to print if test passes
	std::cout << " [PASSED]\n";
}

void RunTests::failed(){
	// string to print if test fails
	std::cout << " [FAILED]\n";
}
