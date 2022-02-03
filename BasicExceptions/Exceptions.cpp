#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception{
public:
	// const char* what() {   // this fun prototype still works
	virtual const char* what() const throw(){
		return "throwing MyCustomized Exception ";
	}
};

class Test{
public:
	inline void testFun(){
		throw MyException();
	}
};

void mightGoWrong(){

	puts("In mightGoWrong");

	bool err1 = false, err2 = false;

	if (err1)
		throw 8;
	if (err2)
		throw string("Throwing string object");
}

void usesMightGoWrong(){
	mightGoWrong();
}

int main(int argc, char** argv){
	Test test;

	try{
		test.testFun();
		usesMightGoWrong();
	}
	catch(int e){
		cout << "Caught the error: " << e << endl;
	}
	catch(string &e){
		cout << "Caught the string error: " << e << endl;
	}
	catch(exception& e){
		cout << "Caught a customized exception: " << e.what() << endl;
	}
	puts ("Not terminated yet..");
}

