/*
 * MultiMap.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv){
	multimap<int, string> lookup;

	lookup.insert(make_pair(24, "python"));
	lookup.insert(make_pair(12, "java"));
	lookup.insert(make_pair(1, "aws"));
	lookup.insert(make_pair(1, "dataScience"));
	lookup.insert(make_pair(1, "linux"));
	lookup.insert(make_pair(3, "shellScripting"));
	lookup.insert(make_pair(2, "cpp"));


	/****************************************************************/
	cout << "Printing by using normal loop" << endl;
	for(auto itr = lookup.begin(); itr != lookup.end(); itr++){
		cout << itr->first << " : " << itr-> second << endl;
	}
	cout << endl;

	/****************************************************************/
	cout << "Display by using find() function" << endl;
	for(auto itr1 = lookup.find(3); itr1 != lookup.end(); itr1++){
		cout << itr1->first << " : " << itr1-> second << endl;
	}
	cout << endl;

	/****************************************************************/
	cout << "Display the equal range elements : " << endl;
	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> pairItr;
	pairItr = lookup.equal_range(1);

	for(multimap<int, string>::iterator itr2 = pairItr.first; itr2 != pairItr.second; itr2++){
		cout << itr2->first << " : " << itr2->second << endl;
	}
	cout << endl;

	/****************************************************************/
	cout << "Display the equal range elements (v2): " << endl;
	auto pairItr2 =  lookup.equal_range(1);
	for(multimap<int, string>::iterator itr3 = pairItr2.first; itr3 != pairItr2.second; itr3++){
			cout << itr3->first << " : " << itr3->second << endl;
	}
	/****************************************************************/

	return 0;
}



