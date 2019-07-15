#include <iostream>

using namespace std;

class Node{
	private:
		int value;
		Node* next;
	public:
		Node(int inp=0);
		int getValue();
		Node* getNext();
		void setNext(Node* hook);
};

Node::Node(int inp){
	value = inp;
	next = NULL;
}

int Node::getValue(){
	return value;
}

Node* Node::getNext(){
	return next;
}

void Node::setNext(Node* hook){
	next = hook;
}

class List{
	private:
		Node* head;
		int numElements;
		int maxElements;
	public:
		List(int maxelements);
		void insert(Node& neo);
		Node pop();
		int length();
};

List::List(int maxelements){
	head = NULL;
	maxElements = maxelements;
	numElements = 0;
}

void List::insert(Node& neo){
	neo.setNext(head);
	head = &neo;
	numElements++;
}

Node List::pop(){
	Node* out = head;
	if(head != NULL)
		head = head->getNext();
	numElements--;
	return *out;
}
int List::length(){
	return numElements;
}
