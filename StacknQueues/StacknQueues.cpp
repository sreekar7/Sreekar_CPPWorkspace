/*
 * StacknQueues.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class test{
	string name;
public:
	test():name(""){};
	test(string _name):name(_name){};

	~test(){
		//cout << "Object Destroyed" << endl;
	}
	inline void print() const{
		cout << name << endl;
	}
};

int main(){
	//LIFO

	stack<test> stackObjs;

	stackObjs.push(test("hellucination"));
	stackObjs.push(test("hundred"));
	stackObjs.push(test("hotels"));
	stackObjs.push(test("hello"));
	stackObjs.push(test("hero"));
	stackObjs.push(test("hi"));

	/* This is invalid code as the reference is refers to destroyed obj.
	test& obj1 = stackObjs.top();
	obj1.print();
	stackObjs.pop();*/

	while(stackObjs.size() > 0){
		test& obj = stackObjs.top();
		obj.print();
		stackObjs.pop();
	}

	cout << endl;

	//FIFO
	queue<test> queueObjs;

	queueObjs.push(test("hellucination"));
	queueObjs.push(test("hundred"));
	queueObjs.push(test("hotels"));
	queueObjs.push(test("hello"));
	queueObjs.push(test("hero"));
	queueObjs.push(test("hi"));


	queueObjs.back().print();
	cout << endl;
	while(queueObjs.size() > 0){
		test& obj1 = queueObjs.front();
		obj1.print();
		queueObjs.pop();
	}

	return 0;
}


