#include "LinkedList.h"
#include "Node.h"
#include "RunTests.h"
#include <iostream>
#include <vector>

/*
	BUGS:
	1) List starts with size = 1 instead of size = 0
	2) Cannot add back with negative numbers...?

*/

int main(){

	RunTests tester;

	std::cout << "Testing...\n";

	if (tester.checkIsEmptyOnEmpty()) { std::cout << "Check is empty on empty: PASSED\n"; }
	else { std:: cout << "Check is empty on empty: FAILED\n"; }

	if (tester.checkIsEmptyOnNonEmpty()) { std::cout << "Check is empty on non empty: PASSED\n"; }
	else { std:: cout << "Check is empty on non empty: FAILED\n"; }

	if (tester.checkSizeOnEmpty()) { std::cout << "Check size on empty: PASSED\n"; }
	else { std:: cout << "Check size on empty: FAILED\n"; }

	if (tester.checkSizeOnNonEmpty()) { std::cout << "Check size on non empty: PASSED\n"; }
	else { std:: cout << "Check is size on non empty: FAILED\n"; }

	if (tester.checkSearchOnEmpty()) { std::cout << "Check search on empty: PASSED\n"; }
	else { std:: cout << "Check search on empty: FAILED\n"; }

	if (tester.checkSearchOnNonEmptyExistsBack()) { std::cout << "Check search in back on non empty: PASSED\n"; }
	else { std:: cout << "Check search in back on non empty: FAILED\n"; }

	if (tester.checkSearchOnNonEmptyExistsFront()) { std::cout << "Check search in front on non empty: PASSED\n"; }
	else { std:: cout << "Check search in front on non empty: FAILED\n"; }

	if (tester.checkSearchOnNonEmptyExistsMiddle()) { std::cout << "Check search in middle on non empty: PASSED\n"; }
	else { std:: cout << "Check search in middle on non empty: FAILED\n"; }

	if (tester.checkSearchOnNonEmptyDoesNotExist()) { std::cout << "Check search on non empty when value doesn't exist: PASSED\n"; }
	else { std:: cout << "Check search on non empty when value doesn't exist: FAILED\n"; }

	if (tester.checkAddBackOnEmpty()) { std::cout << "Check add back on empty list: PASSED\n"; }
	else { std:: cout << "Check add back on empty list: FAILED\n"; }

	if (tester.checkAddBackOnNonEmpty()) { std::cout << "Check add back on non empty list: PASSED\n"; }
	else { std:: cout << "Check add back on non empty list: FAILED\n"; }

	if (tester.checkAddFrontOnEmpty()) { std::cout << "Check add front on empty list: PASSED\n"; }
	else { std:: cout << "Check add front on empty list: FAILED\n"; }

	if (tester.checkAddFrontOnNonEmpty()) { std::cout << "Check add front on non empty list: PASSED\n"; }
	else { std:: cout << "Check add front on non empty list: FAILED\n"; }

	if (tester.checkRemoveBackOnEmpty()) { std::cout << "Check remove back on empty list: PASSED\n"; }
	else { std:: cout << "Check remove back on empty list: FAILED\n"; }

	if (tester.checkRemoveBackOnNonEmpty()) { std::cout << "Check remove back on non empty list: PASSED\n"; }
	else { std:: cout << "Check remove back on non empty list: FAILED\n"; }

	if (tester.checkRemoveFrontOnEmpty()) { std::cout << "Check remove front on empty list: PASSED\n"; }
	else { std:: cout << "Check remove front on empty list: FAILED\n"; }

	if (tester.checkRemoveFrontOnNonEmpty()) { std::cout << "Check remove front on non empty list: PASSED\n"; }
	else { std:: cout << "Check remove front on non empty list: FAILED\n"; }

}

