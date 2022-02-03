// Demonstrating Operator Overloading with member functions and Non member functions.

//TODO: If you've the copy ctor implemented, you shoud've the assignment operator and destructor should've defined. It's a rule.
#include <iostream>

using namespace std;

class Rational{
	int _n = 0;
	int _d = 1;

public:
	Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};
	Rational(const Rational& rhs) : _n(rhs._n), _d(rhs._d) {}; //Copy Ctor -- try executing by compiling this line.
	~Rational();

	inline int getnumerator() const { return _n; }
	inline int getdenominator() const { return _d; }

	// Operator (+) overloading with member functions:
	//Rational operator + (const Rational & ) const ;  // works only if both operands r Rational objects

	Rational operator - (const Rational & ) const ;
	Rational operator * (const Rational & ) const ;
	Rational operator / (const Rational & ) const ;

	Rational & operator = (const Rational &);

	operator std::string() const; // Casting to string obj
};

// (+) Operator overloading with member function
/*Rational Rational::operator + (const Rational & rhs) const {
	return Rational((_n * rhs._d) + (_d * rhs._n) , _d * rhs._d);
}*/

// (+) Operator overloading with Non member function
Rational operator + (const Rational & lhs, const Rational & rhs) {
	return Rational((lhs.getnumerator() * rhs.getdenominator()) + (rhs.getnumerator() * lhs.getdenominator()) , lhs.getdenominator() * rhs.getdenominator());
}

Rational Rational::operator - (const Rational & rhs) const {
	return Rational((_n * rhs._d) - (_d * rhs._n) , _d * rhs._d);
}

Rational Rational::operator * (const Rational & rhs) const {
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational & rhs) const {
	return Rational(_n * rhs._d, _d * rhs._n);
}

Rational & Rational::operator = (const Rational& rhs) {
	if (this != &rhs)
	{
		_n = rhs.getnumerator();
		_d = rhs.getdenominator();
	}
	return *this;
}

std::ostream & operator << (std::ostream & o, const Rational & r){
	return o << r.getnumerator() << "/" << r.getdenominator();
}

// Conversion Operator (converting Ratinal obj to String obj, Infact we can convert it to any type.

Rational::operator std::string() const {
	const static int maxSize = 64;
	char s[maxSize];
	snprintf(s, maxSize, "%d/%d", _n, _d);
	return std::string(s);
}

Rational::~Rational(){
	printf("dtor: %d/%d\n", _n, _d);
	_n = 0; _d = 1;
}

int main(int argc, char** argv) {

	Rational a = 7;		//  7/1
	cout << "a is :" << a << endl;

	Rational b (5, 3); 	// 5/3
	cout << "b is :" << b << endl;

	Rational c = b; // Copy Ctor
	cout << "c is :" << c << endl;

	Rational d; 	// Default Ctor
	cout << "d is :" << d << endl;
	d = c;
	cout << "d is :" << d << endl;

	Rational & e = d; // Reference
	d = e;			  // Assignment to self
	cout << "e is :" << e << endl << endl;

	puts ("\nOperator (+) overloading with member functions: \n");
	cout << a << " + " << b << " = " << a + b << endl << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	puts ("\nOperator (+) overloading with non-member functions: \n");
	cout << 14 << " + " << 2 << " + " << b << " = " << 14 + 2 + b << endl;

	string s = "\nRational object as a string: ";
	s += b;
	cout << s << endl;

	printf ("\nDestroying the objects now !! \n");

	return 0;
}


