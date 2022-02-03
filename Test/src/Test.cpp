//============================================================================
// Name        : Test.cpp
// Author      : Sreekar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include "Test.h"

using namespace std;

template<typename D, typename B>
class IsDerivedFromHelper {
	class No {
	};
	class Yes {
		No no[3];
	};

	static Yes Test(B*);
	static No Test(... );
public:
	enum {
		Is = sizeof(Test(static_cast<D*>(0))) == sizeof(Yes)
	};

};

template<class C, class P>
bool IsDerivedFrom() {
	return IsDerivedFromHelper<C, P>::Is;
}

int main() {

/*	char carr[] = "stringA"
			"stringB" "stringC"; //Null terminated and white space'll be treated as one literal.
	puts(carr); //stringAstringBstringC
	printf("size of the c-string carr is: %ld", sizeof(carr)); //22*/

	/*==================================================*/

	/*Test test1;
	Test test2("Amki", 3);

	cout << "Test1 Object: " << test1.toString() << " It's memory location : " << &test1  << " " << endl;
	cout << "Test2 Object: " << test2.toString() << " It's memory location : " << &test2  << " " << endl;*/

	/*==================================================*/
	//Reverse a String
	/*char arr[] = "hello";

	cout << arr << endl;
	char* pArr = arr;
	cout << pArr << endl;
	int elements = sizeof(arr) - 1;
	char* pArrEnd = arr + elements -1;

	while (pArr < pArrEnd){
		char save = *pArr;
		*pArr = *pArrEnd;
		*pArrEnd = save;

		pArr++;
		pArrEnd--;
	}
	cout << arr << endl; */

	//return 0; // main() need not contain an explicit return statement.
	/*==================================================*/


	if(IsDerivedFrom())
		 cout << "It's true" << endl;
	else
		cout << "it's false" << endl;

	return 0;
}

