#include <iostream>
#include "list.h"
using namespace std;

int main(int argc, char** argv){
	Node a(1);
	Node b(2);

	List l(2);
	l.insert(a);
	l.insert(b);

	Node c = l.pop();
	cout<<"From B we have"<<c.getValue()<<endl;
}
