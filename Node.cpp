//Ryan Stillwagon
//Implementations of Node Class

#include "Node.h"

//Getters
template<class T>
bool Node<T>::setData(T newData){data = newData;}
template<class T>
bool Node<T>::setNext(Node<T> * newNode){next = newNode;}
//Setters
template<class T>
T Node<T>::getData(){return data;}
template<class T>
Node<T> * Node<T>::getNext(){return next;}
