/*
 * ObjSlicingAndPolymrphsm.cpp
 *
 *  Created on: 05-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <string>

using namespace std;

class parent{
public:
	parent(){ // Default Ctor

	}
	parent(const parent& other){  // Copy ctor
		cout << "Copy ctor of P.class has invoked" << endl;
	}

	inline virtual void print() const {
		cout << "I'm Parent" << endl;
	}

	virtual ~parent(){}; // TODO: If Virtual method is there, then need to define virtual dTor
};

class child : public parent{
public:
	inline void print() const {
		cout << "I'm Child" << endl;
	}
};

int main(){

	child c1;
	parent &p1 = c1;
	p1.print();

	parent p2 = child(); // Copy Ctor of parent will be called., this is called as : Upcastring or ObjectSlicing
	p2.print();
	return 0;
}
