#include <iostream>
#include <string>
#include <exception>

using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

class E : public exception {
	const char* msg = nullptr;
	E(){};
public:
	E(const char* s) throw() : msg(s) {	}; // what happens without ; and with ; TODO:.
	const char* what() const throw() { return msg; }
};
// -- Interface
class Animal{
private:
	string _type = "";
	string _name = "";
	string _sound = "";

public:
	Animal(); //default constructor.
	Animal(const string& type, const string& name, const string& sound); //parameterized Ctor
	Animal(const Animal& ); //copy Ctor

	Animal & operator = (const Animal &); //copy Operator.
	~Animal();
	void print() const;

};

// -- Implementation
Animal::Animal() : _type(unk), _name(unk), _sound(unk) {
	puts ("Default Ctor");
}

Animal::Animal (const string& type, const string& name, const string& sound)
: _type(type), _name(name), _sound(sound) {
	puts ("Constructor with Arguments");
	if( type.length() == 0 || name.length() == 0 || sound.length() == 0 )
			throw E("Insufficient params\n");
}

Animal::Animal (const Animal &a) {
	puts ("Copy constructor");
	_name = clone_prefix + a._name;
	_type = a._type;
	_sound = a._sound;
}

Animal::~Animal(){
	printf("Destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

Animal& Animal::operator = (const Animal & o){
	puts ("Assignment operator");
	if (this != &o)
	{
		_name = clone_prefix + o._name;
		_type = o._type;
		_sound = o._sound;
	}
	return *this;
}

void Animal::print() const {
	printf ("%s the %s says %s \n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int main(int argc, char** argv){
	Animal a;
	a.print();

	const Animal b("Goat", "pothu", "mheyy");
	b.print();

	const Animal c = b;
	c.print();

	a = c;
	a.print();

	try{
		Animal d("Lion", "Carnivorous", "");
		d.print();
	}
	catch(exception & e){
		printf("Animal d : %s", e.what());
	}

	return 0;
}
