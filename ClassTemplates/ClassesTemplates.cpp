/*
 * ClassesTemplates.cpp
 *
 *  Created on: 05-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <string>

using namespace std;

template<class T>
class test{
	T obj;

public:
	test(T _obj){
		this->obj = _obj;
	};

	void print(){
		cout << obj << endl;
	}
};

int main(){

	test<string> tempObj("Hi Amki");
	tempObj.print();

	return 0;
}


