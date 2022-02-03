/*
 * CtorInheritence.cpp
 *
 *  Created on: 07-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
using namespace std;

class Machine{
	int id;
public:
	Machine():id(0) {cout << "No argument Machine Ctor called" << endl; }
	Machine(int newId):id(newId) { cout << "parameterized Machine Ctor called" << endl; }
	inline void info(){ cout << "The Machine Id: " << id << endl;}
};

class Vehicle : public Machine{
public:
	Vehicle(){ cout << "No argument Vehicle Ctor called" << endl; }
	Vehicle(int id):Machine(id) { cout << "parameterized Vehicle Ctor called" << endl; }

};
class Car : public Vehicle{
public:
	Car():Vehicle(999){ cout << "No argument Car Ctor called" << endl; }
};

int main(){
	Car car;
	car.info();
}


