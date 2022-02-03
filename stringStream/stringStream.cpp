/*
 * stringStream.cpp
 *
 *  Created on: 06-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string name = "SreekS";
	int age = 32;

	stringstream ss;
				 ss << "Name: ";
			   	 ss <<  name;
				 ss << ", Age: ";
				 ss << age ;

	cout << ss.str() << endl;
	return 0;
}



