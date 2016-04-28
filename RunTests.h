/**
*	@file RunTests.h
*	@author 
*	@date 
*	@brief A header file test methods
*/

#ifndef RUN_TESTS_H
#define RUN_TESTS_H

#include <iostream>

class RunTests
{
	public:
	/** @pre None.
	*   @post An empty list is created.
	*/
	RunTests();	

	/** @pre None.
	*   @post None.
	*   @return true if the list is empty, false otherwise.
	*/	
	void checkIsEmptyOnEmpty();

	/** @pre None.
	*   @post None.
	*   @return true if the list is not empty, false otherwise.
	*/	
	void checkIsEmptyOnNonEmpty();

	/** @pre None.
	*   @post None.
	*   @return true if 0
	*/	
	void checkSizeOnEmpty();

		/** @pre None.
	*   @post None.
	*   @return true if size matches number in list.
	*/	
	void checkSizeOnNonEmpty();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns false.
	*/	
	void checkSearchOnEmpty();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list in middle
	*/	
	void checkSearchOnNonEmptyExistsMiddle();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list at bac
	*/	
	void checkSearchOnNonEmptyExistsBack();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list at front
	*/	
	void checkSearchOnNonEmptyExistsFront();

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns false
	*/	
	void checkSearchOnNonEmptyDoesNotExist();

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return true if size increments and value exists
	*/	
	void checkAddBackOnEmpty();

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return true if size incrememnts and value exists
	*/	
	void checkAddBackOnNonEmpty();

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return true if size increments and value exists
	*/	
	void checkAddFrontOnEmpty();

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if size decrements and value is removed
	*/	
	void checkRemoveBackOnEmpty();	

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if size decrements and value is removed
	*/	
	void checkRemoveBackOnNonEmpty();	

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if size decrements and value is removed
	*/	
	void checkRemoveFrontOnEmpty();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if size decrements and value is removed
	*/	
	void checkRemoveFrontOnNonEmpty();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if elements are in correct order
	*/	
	void checkAddBackAddFront();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if elements are removed correctly
	*/	
	void checkRemoveBackRemoveFront();

	private:
	void passed();
	void failed();
	void printList(LinkedList<int>, LinkedList<int>);

};

#include "RunTests.cpp"

#endif

/*
Tests:
Check isEmpty on empty list
Check isEmpty on non-empty list

Add front to empty list
Add front to non-empty list

Add back to empty list
Add back to non-empty list

Check size on empty list
Check size on non-empty list

Search on empty list
Search on non-empty list
Search on list with value added to back
Search on list with value added to front

Remove back from empty list
Remove back from non-empty list that was added to back
Remove back from non-empty list that was added to front

Remove front from empty list
Remove front from non-empty list that was added to back
Remove front from non-empty list that was added to front

*/





