#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

//Constructor
Node::Node(int newVal) {
	val = newVal;
	right = NULL;
	left = NULL;
}
//Deconstructor
Node::~Node(){

}

//getter and setter for value
int Node:: getVal(){
	return val;
}
void Node:: setVal(int newVal){
	val = newVal;
}
//getter and setter for right node
void Node::setRight(Node* newRight){
	right = newRight;
}
Node* Node::getRight(){
	return right;
}
//Getter and setter for left node
void Node::setLeft(Node* newLeft){
	left = newLeft;
}
Node* Node::getLeft(){
	return left;
}
//Getter and setter for parent node
void Node::setParent(Node* newParent){
  parent = newParent;
}
Node* Node::getParent(){
	return parent;
}
