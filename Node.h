//Ryan Stillwagon
//Interface of the Node Class

#ifndef NODE_H
#define NODE_H

template<class T>
class Node{
private:
  T data;
  Node * next;
public:
  Node():next(0){}
  Node(T newData):next(0),data(newData){}

  //Setters
  bool setData(T newData);
  bool setNext(Node * newNode);
  //Getters
  T getData();
  Node<T> * getNext();
};

#endif
