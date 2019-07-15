#include <iostream>
#include <string>
#include "list.h"
using namespace std;

int main(int argc, char** argv){
	Node<int> a(1);
	Node<int> b(2);

	List<int> l(2);
	l.insert(a);
	l.insert(b);

	Node<int> c = l.pop();
	cout<<"From B we have"<<c.getValue()<<endl;

	Node<string> h("Hi there");
	Node<string> j("I an good");

	List<string> ls(3);
	ls.insert(h);
	ls.insert(j);

	cout<<"initial length of the str List is "<<ls.length()<<endl;

	Node<string> jj = ls.pop();
	cout<<" From j we have the string "<<jj.getValue()<<endl;
	cout<<"Final length after pop is "<<ls.length()<<endl;
}
