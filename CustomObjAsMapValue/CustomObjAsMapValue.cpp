/*
 * CustomObjAsMapValue.cpp
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
	person():name(""), age(0){}
	person(string _name, int _age):name(_name), age(_age){};

	person(const person& other){
		name = other.name;
		age = other.age;
	}
	bool operator<(const person& someother){
		if(name == someother.name)
			return age < someother.age;
		else
			return name < someother.name;
	}
	inline void print() const{
		cout << "Name: " << name << ", Age: " << age;
	}
};
int main(int argc, char** argv){

	map<int, person> chars;

	chars[9] = person("Sreeks", 30);
	chars[15] = person("Chutki", 1);
	chars[10] = person("Amki", 1);

	chars.insert(make_pair(22, person("Achu", 1)));

	for(auto itr = chars.begin(); itr != chars.end(); itr++){
		cout << itr->first << " : " << flush;
		itr->second.print();
		cout << endl;
	}

	return 0;
}


