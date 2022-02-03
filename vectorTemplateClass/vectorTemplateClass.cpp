/*
 * vectorTemplateClass.cpp
 *
 *  Created on: 30-Dec-2017
 *      Author: Deeshu
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
	vector<int> resizArr = {1, 2, 3, 4, 5};

	resizArr.push_back(6);

	vector<int>::iterator it = resizArr.begin();

	for( ; it != resizArr.end(); it++){
		cout << *it << endl;
	}

	//Notice here, itr not even declared/initialized like 'it' - but code got worked.
	for(auto itr : 	resizArr){
		cout << itr << endl;
	}

	cout << "Size of the Re-Sizable template class : " << resizArr.size();

	return 0;
}


