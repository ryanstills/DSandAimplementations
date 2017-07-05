//Ryan Stillwagon
//Interface for a Singly Linked List


#include "Node.h"

#ifndef SINGLE_LINKED_LIST
#define  SINGLE_LINKED_LIST

template<class T>
class SinglyLinkedList{
private:
  Node<T> * head;
  int listSize;
public:
  SinglyLinkedList():head(0), listSize(0){}
  SinglyLinkedList(Node<T> * newNode, int aData):head(new Node<T>(aData)), listSize(1){}

  //List Information
  bool isEmpty();
  int getSize();

  //add
  bool push_front(Node<T> * newNode);
  bool push_front(T newData);

  bool push_back(Node<T> * newNode);
  bool push_back(T newData);

  bool push_min(Node<T> * newNode);
  bool push_min(T newData);

  bool push_max(Node<T> * newData);
  bool push_max(T newData);

  //delete
  Node<T> * pop_front_node();
  T pop_front_data();

  Node<T> * pop_back_node();
  T pop_back_data();

  //print
  void print();
};

#endif
