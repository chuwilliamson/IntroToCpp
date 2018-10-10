#include "Iterator.h"

template<class Type>
Iterator<Type>::Iterator() : current(nullptr)
{
}

template<class Type>
Iterator<Type>::Iterator(Node<Type>* ptr)
{
	current = ptr;
}
 

template<class Type>
Iterator<Type> Iterator<Type>::operator++()
{
	current = current->link;
	return *this;
}

template<class Type>
Type Iterator<Type>::operator*()
{
	return current->info;
}

template<class Type>
bool Iterator<Type>::operator==(const Iterator<Type>& other) const
{
	return current == other.current;
}

template<class Type>
bool Iterator<Type>::operator!=(const Iterator<Type>& other) const
{
	return current != other.current;
}