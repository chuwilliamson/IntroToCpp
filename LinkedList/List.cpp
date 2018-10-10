#include "List.h"

template<class Type>
List<Type>::List()
{
}

template<class Type>
List<Type>::List(const List<Type>& otherlist)
{
}

template<class Type>
List<Type>::~List()
{
}

template<class Type>
List<Type>& List<Type>::operator=(const List<Type>&) const
{
	// TODO: insert return statement here
}

template<class Type>
void List<Type>::initializeList()
{
}

template<class Type>
bool List<Type>::isEmptyList() const
{
	return false;
}

template<class Type>
void List<Type>::print() const
{
}

template<class Type>
int List<Type>::length() const
{
	return 0;
}

template<class Type>
void List<Type>::destroyList()
{
}

template<class Type>
Type List<Type>::front() const
{
	return Type();
}

template<class Type>
Type List<Type>::back() const
{
	return Type();
}

template<class Type>
bool List<Type>::search(const Type &) const
{
	return false;
}

template<class Type>
void List<Type>::insertFirst(const Type &) const
{
}

template<class Type>
void List<Type>::insertLast(const Type &) const
{
}

template<class Type>
void List<Type>::deleteNode(const Type &) const
{
}

template<class Type>
Iterator<Type> List<Type>::begin()
{
	return Iterator<Type>();
}

template<class Type>
Iterator<Type> List<Type>::end()
{
	return Iterator<Type>();
}

template<class Type>
void List<Type>::copyList(const List<Type>& otherList)
{
}
