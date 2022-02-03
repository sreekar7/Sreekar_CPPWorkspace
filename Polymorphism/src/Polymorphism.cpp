//============================================================================
// Name        : Polymorphism.cpp
// Author      : Sreekar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	virtual void speak() = 0;
	virtual ~Animal(){};
};

class cat : public Animal{
public:
	virtual void speak(){
		cout << "GrrrrGrrrrrr" << endl;
	}
	virtual ~cat(){};
};

class HouseCat : public cat{
public:
	virtual void speak(){
		cout << "Meowwwwwwww" << endl;
	}
	virtual ~HouseCat(){};
};



int main() {

	Animal *ptrAnimal = new HouseCat;
	ptrAnimal->speak();
	delete ptrAnimal;

	return 0;
}
