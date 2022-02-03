#include <iostream>
#include <new>
using namespace std;

class A{
	int _a = 0, _b = 0, _c = 0;

public:
	A(int i=0);
	~A();

	inline int getA() {return _a; }
	inline int getB() {return _b; }
	inline int getC() {return _c; }

};
A::A(int i) : _a(i), _b(i+1), _c(i+2) {
	puts ("A constructor called\n");
}

A::~A() {
	puts ("A destructor called\n");
}
int main(int argc, char** argv){
	puts ("Allocating space for an object");
	//A *a = new (nothrow) A;
	A *a = new (nothrow) A[3]; //nothrow will be used to not to throw an exception,instead it throws nullptr incase there is no space left.
	if (a == nullptr){
		return 1;
	}
	printf("a: %d %d %d\n", a->getA(), a->getB(), a->getC());
	puts ("A object has been deleted");
	//delete a;
	delete[] a;

	return 0;
}
