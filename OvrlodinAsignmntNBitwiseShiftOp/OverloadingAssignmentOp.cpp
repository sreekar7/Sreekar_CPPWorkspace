/*
 * OverloadingAssignmentOp.cpp
 *
 *  Created on: 04-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <string>
using namespace std;


class test{
private:
	int id;
	string name;
public:
	test():id(0),name(""){};
	test(int _id, string _name):id(_id), name(_name){};
	~test(){};

	//Operator = overloading
	const test& operator=(const test& other){
		cout << "Assignment operator running .." << endl;
		id = other.id;
		name = other.name;
		return *this;
	}

	//Copy Ctor
	test (const test& other){
		cout << "Copy Constructor running .." << endl;
		id = other.id;
		name = other.name;
		// *this = other; also works
	}

	void print(){
		cout << "id: " << id << " name: " << name << endl;
	}
	friend ostream & operator<<(ostream& out, const test& object){
		out << "ID: " << object.id << " NAME: " << object.name << endl;
		return out;
	}
};

int main(){
	cout << "In main() .." << endl;

	test obj1(1, "Amki");
	obj1.print();
	cout << endl;

	test sample(2, "Sreeks");
	test obj2;
	obj2 = obj1;
	obj2.print();
	cout << endl;

	test obj3 = obj2; // here copy Ctor will run as the object got assigned while declaring itself though Assignmen op has been overloaded.
	obj3.print();
	cout << endl;

	test obj4, obj5;
	obj4=obj5=sample; //Chaining the methods.

	// Overloading Bitwise shift operator
	cout << obj4 << obj5 << endl;

	test obj6;
	obj6.operator=(obj5);
	obj6.print();
	cout << endl;
	return 0;
}


