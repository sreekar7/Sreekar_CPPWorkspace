#include <iostream>
#include <string>
#include <exception>

using namespace std;

class E : public exception{
private:
	E(){}; //private ctor
	const char* _msg;
public:
	explicit E(const char* s) throw() : _msg(s){}
	const char* what() const throw() { return _msg; }
};

//Fixed size LIFO template

template <typename T>
class Stack{

private:
	int _size;
	int _top;
	T* stackPtr;

	static const int defaultSize = 10;
	static const int maxSize = 100;

public:
	explicit Stack(int s=defaultSize);
	~Stack() { delete[] stackPtr; }

	T& push(const T&);
	T& pop();

	inline bool isEmpty() const { return _top < 0; }
	inline bool isFull() const { return _top >= _size - 1; }

	int top() const { return _top; }
	int size() const { return _size; }
};

template <typename T>
Stack<T>::Stack (int s){

	if(s > maxSize || s < 1)
		throw E("Invalid stack size");
	else
		_size = s;

	stackPtr = new T[_size];
	_top = -1;
}

template <typename T>
T& Stack<T>::push(const T& i){

	if(isFull())
		throw E("stack is full");

	return stackPtr[++_top] = i;
}

template <typename T>
T& Stack<T> :: pop(){

	if(isEmpty())
		throw E("stack is empty");

	return stackPtr[_top--];
}

int main(int argc, char** argv){
	try{
		Stack<int> si(5);

		cout << "Stack<int> size is: " << si.size() << endl;
		cout << "top of the Stack is :" << si.top() << endl;

		for(int i : {1, 2, 3, 4, 5}) {
			si.push(i);
		}

		cout << "\ntop of the Stack after pushes: " << si.top() << endl;
		cout << "Stack is " << (si.isFull() ? "" : "not full") << "full" << endl << endl;

		while(!si.isEmpty()){
			cout << "Popped: " << si.pop() << endl;
		}
	}
	catch (E & e){
		cout << "Stack error:" << e.what() << endl;
	}

	try{
		Stack<string> ss(5);

		cout << "Stack<String> size is: " << ss.size() << endl;
		cout << "top of the stack is: " << ss.top() << endl;

		for (const char* str : {"one", "two", "three", "four", "five"}){
			ss.push(str);
		}

		cout << "\ntop of the Stack after pushes: " << ss.top() << endl;
		cout << "Stack is " << (ss.isFull() ? "" : "not full") << "full" << endl << endl;

		while(!ss.isEmpty()){
			cout << "Popped: " << ss.pop() << endl;
		}
	}
	catch (E & e) {
		cout << "Stack error:" << e.what() << endl;
	}
	return 0;
}
