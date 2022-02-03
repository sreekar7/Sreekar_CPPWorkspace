/*
 * Test.h
 *
 *  Created on: 06-Jan-2018
 *      Author: Deeshu
 */

#ifndef TEST_H_
#define TEST_H_

#include <iostream>

using namespace std;

class Test {
	string name;
	int age;
public:
	Test():name("Unknown"), age(0){}; // Ctor Initializatin list,  it's efficient
	Test(string _name, int _age):name(_name), age(_age){};
	string toString();
};

string Test::toString(){
	stringstream ss;
	ss << "Name : ";
	ss << name;
	ss << ", Age : ";
	ss << age;

	return ss.str();
}

#endif /* TEST_H_ */
