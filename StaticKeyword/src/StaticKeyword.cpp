//============================================================================
// Name        : StaticKeyword.cpp
// Author      : Sreekar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class test{
private:
	int Id;
	static int count;

public:
	static int const Max = 99;
	test(){
		Id = ++count;
	}
	static void getObjCount() { cout << "Object count: " << count << endl;}
};

int test::count = 0;

int main() {
	cout << "Accessing the static variable by Class name: " << test::Max << endl;

	test test1;
	test::getObjCount();

	test test2;
	test::getObjCount();
	return 0;
}
