#include "UnorderedList.h"
 

template<class Type>
UnorderedList<Type>::UnorderedList()
{
}

template<class Type>
UnorderedList<Type>::~UnorderedList()
{
}

template<class Type>
bool UnorderedList<Type>::search(const Type & searchItem) const
{
	return false;
}

template<class Type>
void UnorderedList<Type>::insertFirst(const Type & newItem) const
{
	Node<Type> tmp = new Node<Type>();
	tmp->info = newItem;
	tmp->link = nullptr;
	
}

template<class Type>
void UnorderedList<Type>::insertLast(const Type & newItem) const
{
}

template<class Type>
void UnorderedList<Type>::deleteNode(const Type & deleteItem) const
{
}
 