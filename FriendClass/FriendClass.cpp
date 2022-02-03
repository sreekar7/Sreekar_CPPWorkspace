#include <iostream>

using namespace std;


class Animal{
	string _name = "unknown";
	string _type;
	string _sound;

	Animal(){}; //Private constructor prevents construction of base class.
//protected:  protected constructor for use by dervied classes.
	Animal(const string& n, const string& t, const string& s) : _name(n), _type(t), _sound(s) {}

	friend class dog;
	friend class cat;
	friend const string & getAnimalName(const Animal& a) ;

public:
	void speak() const;
	const string & getName() const { return _name; }
	const string & getType() const { return _type; }
	const string & getSound() const { return _sound; }
};

void Animal::speak() const{
	printf("%s the %s says %s \n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// Derived classes Dog, Cat from base class: Animal
class dog : public Animal{
	int walked;
public:
	dog(string n) : Animal(n, "Dog", "woof"), walked(0) {};
	int walk(){ return ++walked; }
};

class cat : public Animal{
	int petted;
public:
	cat(string n) : Animal(n, "cat", "meow"), petted(0) {};
	int pet() { return ++petted; }
};

const string & getAnimalName(const Animal& a) {
	puts ("In getAnimalName()");
	return a._name;
}
int main(){

	dog d("Razer");
	cat c("Pussy");

	d.speak();
	c.speak();

	printf("Accessing the private member through friend fun : %s\n", getAnimalName(d).c_str());

	printf("the dog has been walked %d times \n", d.walk());
	printf("the cat has been petted %d times \n", c.pet());

}



