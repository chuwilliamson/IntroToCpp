#pragma once 
template <class T>
class Stack
{
public:
	Stack<T>();
	T Top();
	bool Pop();
	bool Push(T* item);
	bool isEmpty();
	bool isFull();
private:
	T* mData;
	int mCount;
protected:
};
