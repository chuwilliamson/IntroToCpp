#pragma once
#include "List.h"
template<class Type>
class UnorderedList : public List<Type>
{
public:
	UnorderedList();
	~UnorderedList();
	//function to determine whether searchItem is in the list.
	//Postcondition: returns true if searchItem is in the list,
	//otherwise the value false is returned	
	bool search(const Type& searchItem) const;

	//function to insert newItem at the beginning of teh list.
	//Postcondition: first points to the new list,
	//newItem is inserted at the beginning of the list,
	//last points to the last node in the list
	//and count is incremented by 1
	void insertFirst(const Type& newItem) const;

	//function to insert newItem at the end of the list.
	//postcondition: first points to the new list, 
	//newItem is inserted at the end of the list,
	//last points to the last node in the list,
	//and count is incremented by 1
	void insertLast(const Type& newItem) const;

	//Function to delete deleteItem from the list
	//Postcondition: If found, the node containing deleteItem is deleted from the list,
	//first points to the first node,
	//last points to the last node of the updated list
	//and count is decremented by 1
	void deleteNode(const Type& deleteItem) const;

};
