#pragma once
#include "Node.h"
template <class Type>
class Iterator
{	
public:
	//Default Constructor
	//Postcondition: current = nullptr
	Iterator();
	//Paramaterized Constructor
	//Postcondition: current = ptr;
	Iterator(Node<Type> *ptr);
	//Postcondition: Returns the info contained in node
	Type operator*();
	//Postcondition: The iterator is advanced to the next node
	Iterator<Type> operator++();
	//Postcondition:Returns true if this iterator is equal to 
	//the iterator specified by right, 
	//otherwise it returns false
	bool operator==(const Iterator<Type>&) const;
	//Postcondition:Returns true if this iterator is not equal to 
	//the iterator specified by right, 
	//otherwise it returns false
	bool operator!=(const Iterator<Type>&) const;

private:
	//pointer to point to the current 
	//node in the linked list
	Node<Type> *current;
};

