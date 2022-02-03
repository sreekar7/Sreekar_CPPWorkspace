/*CustomObjectsAsMapKey.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <map>

using namespace std;

class person{
private:
	string name;
	int age;
public:
	//Default Ctor
	person():name(""), age(0){}

	//Parameterized ctor
	person(string _name, int _age): name(_name), age(_age){

	}
	//copy constructor
	person(const person& other){
		name = other.name;
		age = other.age;
	}
	inline void print() const{
		cout << "Name : " << name << " Age: " << age;
	}
	bool operator<(const person& someother) const{
		if(name == someother.name)
			return age < someother.age;
		else
			return name < someother.name;
	}
};

int main(int argc, char** argv){

	map<person, int> personDetailsMap;

	personDetailsMap[person("Srikar", 25)] = 9; // TODO: Sorted by key automatically.
	personDetailsMap[person("Shashank", 29)] = 8;
	personDetailsMap[person("Sharu", 28)] = 7;

	for(auto itr = personDetailsMap.begin(); itr != personDetailsMap.end(); itr++){
		cout << itr->second << " : " << flush;
		itr->first.print();
		cout << endl;
	}
	return 0;
}



