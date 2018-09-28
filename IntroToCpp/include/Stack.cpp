#include "Stack.h"
#include "Hero.h"
template<class T>
 Stack<T>::Stack() :mCount(0)
 {
	 mData = new Hero[10];
 }

template<typename T>
 T Stack<T>::Top()
{
	return mData[mCount];
}

template<typename T>
 bool Stack<T>::Pop()
{
	if (this->isEmpty())
		return false;	 
	mCount--;
	return true;
}

template<typename T>
 bool Stack<T>::Push(T * item)
{
	if (this->isFull())
		return false;
	mData[mCount++] = *item;
	return true;
}

template<typename T>
 bool Stack<T>::isEmpty()
{
	return mCount <= 0;
}

template<typename T>
 bool Stack<T>::isFull()
{
	return mCount >= 10;
}
 template class Stack<Hero>;
template Hero Stack<Hero>::Top();
template bool Stack<Hero>::Push(Hero* item);