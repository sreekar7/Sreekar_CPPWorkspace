/*
 * usingFunPtrs.cpp
 *
 *  Created on: 05-Jan-2018
 *      Author: Deeshu
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string list){
	return list.size() == 3;
}

int countStrings(vector<string> &container, bool (*pmatch)(string test)){
	int tally = 0;

	for(unsigned i=0; i < container.size(); i++){
		if (match(container[i]))
			tally++;
	}
	return tally;
}
int main(){

	vector<string> vObjs;

	vObjs.push_back("one");
	vObjs.push_back("two");
	vObjs.push_back("sree");
	vObjs.push_back("333");
	vObjs.push_back("444");
	vObjs.push_back("raju");

	cout << "Using count_if library function from algorithms : " << endl;
	cout << "The count of strings with size 3 is : " << count_if(vObjs.begin(), vObjs.end(), match) << endl << endl;

	cout << "Using function pointers the size is : " <<	countStrings(vObjs, match) << endl;

	return 0;
}



