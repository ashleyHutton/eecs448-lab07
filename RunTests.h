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
	bool checkIsEmptyOnEmpty() const;

	/** @pre None.
	*   @post None.
	*   @return true if the list is not empty, false otherwise.
	*/	
	bool checkIsEmptyOnNonEmpty() const;

	/** @pre None.
	*   @post None.
	*   @return true if 0
	*/	
	bool checkSizeOnEmpty() const;

		/** @pre None.
	*   @post None.
	*   @return true if size matches number in list.
	*/	
	bool checkSizeOnNonEmpty() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns false.
	*/	
	bool checkSearchOnEmpty() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list in middle
	*/	
	bool checkSearchOnNonEmptyExistsMiddle() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list at bac
	*/	
	bool checkSearchOnNonEmptyExistsBack() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns true on value in list at front
	*/	
	bool checkSearchOnNonEmptyExistsFront() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns false
	*/	
	bool checkSearchOnNonEmptyDoesNotExist() const;

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return true if size increments and value exists
	*/	
	bool checkAddBackOnEmpty();

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return true if size incrememnts and value exists
	*/	
	bool checkAddBackOnNonEmpty();

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return true if size increments and value exists
	*/	
	bool checkAddFrontOnEmpty();

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return true if size increments and value exists
	*/	
	bool checkAddFrontOnNonEmpty();

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if size decrements and value is removed
	*/	
	bool checkRemoveBackOnEmpty();	

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if size decrements and value is removed
	*/	
	bool checkRemoveBackOnNonEmpty();	

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if size decrements and value is removed
	*/	
	bool checkRemoveFrontOnEmpty();

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if size decrements and value is removed
	*/	
	bool checkRemoveFrontOnNonEmpty();

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





