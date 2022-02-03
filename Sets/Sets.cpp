/*
 * Sets.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <set>

using namespace std;

class test{
	int id;
	string name;

public :
	test():id(0), name(""){}
	test(int _id, string _name):id(_id), name(_name){}; //TODO: Does it make any diff with semi colon and without ?

	inline void print() const{
		cout << "Id: " << id << ", Name: " << name << endl;
	}

	//TODO: The final output will be sorted out based on the operator < overloading

	// Sorted out based on the id, if we enable the below code.
	bool operator<(const test& other) const{
		return id < other.id;
	}

	// Sorted out based on the name, if we enable the below code.
	/*bool operator<(const test& other) const{
			return name < other.name;
	}*/
};

int main(){

	set<test> testObjs;
	testObjs.insert(test(1, "Amki"));
	testObjs.insert(test(2, "Achu"));
	testObjs.insert(test(3, "Sreeks"));
	testObjs.insert(test(4, "Sharu"));

	for(set<test>::iterator itr = testObjs.begin(); itr != testObjs.end(); itr++){
		itr->print();
	}
}
