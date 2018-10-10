#pragma once
#include "Iterator.h"

template <class Type>
class List
{
protected:
	int count;
	Node<Type> *first;
	Node<Type> *last;
public:
	List<Type>& operator=(const List<Type>&) const;
	//Initialize the list to an empty state
	//Postcondition: first = null, last = null, count = 0
	void initializeList();

	//Description: Determines whether the list is empty
	bool isEmptyList() const;

	//Function to output the data contained in each node.
	//Postcondition: none
	void print() const;

	//Function to return the number of nodes in the list
	//Postcondition: The value of count is returned
	int length() const;
	
	//Function to delete all the nodes from the list
	//Postcondition: first = null, last = null, count = 0
	void destroyList();
	
	//Function:: to return the first element of the list
	//Precondition: The list must exist ad must not be empty
	//Postcondition: If thel ist is empty, the program terminates;
	//otherwise, the first element of the list is returned
	Type front() const;
	
	//Function to return the last element of the list
	//Precondition: The list must exist and must not be empty
	//Postcondition: If the list is empty, the program terminates;
	//otherwise, the last element of the list is returned
	Type back() const;

	//function to determine whether searchItem is in the list.
	//Postcondition: returns true if searchItem is in the list,
	//otherwise the value false is returned	
	virtual bool search(const Type& searchItem) const = 0;

	//function to insert newItem at the beginning of teh list.
	//Postcondition: first points to the new list,
	//newItem is inserted at the beginning of the list,
	//last points to the last node in the list
	//and count is incremented by 1
	virtual void insertFirst(const Type& newItem) const = 0;

	//function to insert newItem at the end of the list.
	//postcondition: first points to the new list, 
	//newItem is inserted at the end of the list,
	//last points to the last node in the list,
	//and count is incremented by 1
	virtual void insertLast(const Type& newItem) const = 0;

	//Function to delete deleteItem from the list
	//Postcondition: If found, the node containing deleteItem is deleted from the list,
	//first points to the first node,
	//last points to the last node of the updated list
	//and count is decremented by 1
	virtual void deleteNode(const Type& deleteItem) const = 0;

	//Function to return an interator at the beginning of the linked list
	//Postcondition: returns an interator such that current is set to first
	Iterator<Type> begin();

	//Function to return an iterator one element past the last element of the linked list
	//Postcondition: returns an interator such that current is set to first
	Iterator<Type> end();
	//default constructor
	//initializes the list to an empty state
	//Postcondition: first = null, last = null, count = 0	
	List();

	//copy constructor
	List(const List<Type>& otherList);

	//destructor
	//Deletes all the nodes from the list
	//Postcondition: the list object is destroyed

	~List();
private:

	//Function to make a copy of otherlist
	//Postcondition: a copy of otherlist is created and assigned to this list
	void copyList(const List<Type>& otherList);

};

