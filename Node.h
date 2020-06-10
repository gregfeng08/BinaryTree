#include <iostream>
#include <cstring>

#ifndef NODE_H
#define NODE_H

using namespace std;

class Node{
public:
  Node(int);
  int getVal();
  void setVal(int);
  Node* getRight();
  Node* getLeft();
  Node* getParent();
  void setRight(Node*);
  void setLeft(Node*);
  void setParent(Node*);
  ~Node();
private:
  Node* right;
  Node* left;
  Node* parent;
  int val;	
};
#endif
