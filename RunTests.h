/**
*	@file RunTests.h
*	@author 
*	@date 
*	@brief A header file test methods
*/

#ifndef RUN_TESTS_H
#define RUN_TESTS_H

#include <iostream>

class LinkedList
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
	*   @return true if search returns true on value in list.
	*/	
	bool checkSearchOnNonEmptyExists() const;

	/** @pre the value is a valid T.
	*   @post none.
	*   @return true if search returns false
	*/	
	bool checkSearchOnNonEmptyDoesNotExist() const;



	// I'M HERE! //
	//
	//
	

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
	*/	
	void checkAddBackOnEmpty(T value);

	/** @pre the value is a valid T.
	*   @post One new element added to the end of the list.
	*   @return none.
	*/	
	void checkAddBackOnNonEmpty(T value);

	/** @pre the value is a valid T.
	*   @post One new element added to the front of the list.
	*   @return none.
	*/	
	void addFront(T value);

	/** @pre None
	*   @post One element is removed from the back of the list.
	*   @return true if the back element was removed, false if the list is empty.
	*/	
	bool removeBack();	

	/** @pre None
	*   @post One element is removed from the front of the list.
	*   @return true if the front element was removed, false if the list is empty.
	*/	
	bool removeFront();

};

#include "LinkedList.cpp"

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





