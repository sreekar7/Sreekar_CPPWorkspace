/*
 * listContainer.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */


#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv){

	list<int> numbers;

	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	numbers.push_front(1);

	auto it = numbers.begin();
	it++;
	numbers.insert(it, 100);

	cout << "Iterating through the looop: " << endl;

	for(auto it = numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}
	auto eraseIt = numbers.begin();
	eraseIt++;
	numbers.erase(eraseIt);

	cout << "Iterating through the looop after erasing: " << endl;

	for(auto it = numbers.begin(); it != numbers.end(); it++){
			cout << *it << endl;
	}
	return 0;
}

