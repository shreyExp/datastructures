#include <iostream>

using namespace std;


template<class T>
class Node{
	private:
		T value;
		Node<T>* next;
	public:
		Node(T inp=0);
		T getValue();
		Node<T>* getNext();
		void setNext(Node<T>* hook);
};

template<class T>
Node<T>::Node(T inp){
	value = inp;
	next = NULL;
}

template<class T>
T Node<T>::getValue(){
	return value;
}

template<class T>
Node<T>* Node<T>::getNext(){
	return next;
}

template<class T>
void Node<T>::setNext(Node* hook){
	next = hook;
}

template<class T>
class List{
	private:
		Node<T>* head;
		int numElements;
		int maxElements;
	public:
		List(int maxelements);
		void insert(Node<T>& neo);
		Node<T> pop();
		int length();
};

template<class T>
List<T>::List(int maxelements){
	head = NULL;
	maxElements = maxelements;
	numElements = 0;
}

template<class T>
void List<T>::insert(Node<T>& neo){
	neo.setNext(head);
	head = &neo;
	numElements++;
}

template<class T>
Node<T> List<T>::pop(){
	Node<T>* out = head;
	if(head != NULL)
		head = head->getNext();
	numElements--;
	return *out;
}

template<class T>
int List<T>::length(){
	return numElements;
}
