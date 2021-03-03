#ifndef VARLIST_CPP
#define VARLIST_CPP

#include <type_traits>
#include <iostream>

using namespace std;

template<class T>
int VarList<T>::check(T key) {
	int index = -1;

	int i = 0;
	for(i = 0; i < size; i++)
	{
		if( dArray[i] == key )
		{
			index = i;
			break;
		}
	}

	return index;
}

template <class T>
void VarList<T>::addValue(T v) {
	if( check(v) >= 0 )
		return;

	// create new array
	T* new_array = new T[size + 1];
	if( new_array == NULL )
		return;

	int i = 0;
	for(i = 0; i < size; i++)
		new_array[i] = dArray[i];
	
	new_array[size] = v;

	// deallocate the old array
	delete dArray;

	// assign the address of the new array back to the original pointer
	dArray = new_array;
	size++;
}

template <class T>
void VarList<T>::removeValue(T v) {
	int index = check(v);
	if( index < 0 )
		return;

	// create new array
	T* new_array = new T[size - 1];
	if( new_array == NULL )
		return;

	int i = 0, j = 0;
	for(i = 0; i < size; i++)
	{
		if( i < index )
			new_array[i] = dArray[i];
		else if( i > index )
			new_array[i - 1] = dArray[i];
	}
	
	
	// deallocate the old array
	delete dArray;

	// assign the address of the new array back to the original pointer
	dArray = new_array;
	size--;
}

template <class T>
void VarList<T>::printList() {
	int i = 0;
	for(i = 0; i < size; i++)
	{
		if( i > 0 )
			cout << " ";
		cout << dArray[i];
	}
	cout << endl;
}

template <class T>
VarList<T>::VarList(void) 
{
	dArray = NULL;
	size = 0;
}

template <class T>
VarList<T>::VarList(const VarList<T>& t) // copy constructor
{
	int sz = t.size;
	T* array = t.dArray;

	dArray = new T[sz];
	if( dArray == NULL )
		return;

	int i = 0;
	for(i = 0; i < sz; i++)
		dArray[i] = array[i];
	size = sz;
}

template <class T>
VarList<T>& VarList<T>::operator=(const VarList<T>& t) // overloaded assignment
{
	if( this == &t ) // self-assingment
		return *this;

	if( dArray != NULL )
		delete dArray;

	int sz = t.size;
	T* array = t.dArray;

	dArray = new T[sz];
	size = 0;
	if( dArray == NULL )
		return *this;

	int i = 0;
	for(i = 0; i < sz; i++)
		dArray[i] = array[i];
	size = sz;

	return *this;
}

template <class T>
VarList<T>::~VarList() // destructor
{
	if( dArray != NULL )
		delete dArray;

	size = 0;
}
#endif /* VARLIST_CPP */