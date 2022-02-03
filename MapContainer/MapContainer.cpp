/*
 * MapContainer.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char** argv){

	map<string, int> coupleAge;

	coupleAge["Srikar"] = 4;
	coupleAge["Shashank"] = 1;
	coupleAge["Sharanya"] = 3;

	coupleAge.insert(make_pair("Srinivas", 26));
	cout << "Srikar's Couple Age is: " << coupleAge["Srikar"] << endl;

	for(map<string,int>::iterator mapit = coupleAge.begin(); mapit != coupleAge.end(); mapit++){
		cout << "The couple: " << mapit->first << " has age: " << mapit->second << endl ;
	}

	cout << "paired list are - " << endl;
	for(auto mapItr = coupleAge.begin(); mapItr != coupleAge.end(); mapItr++){
		pair<string, int> paired = *mapItr;

		cout << mapItr->first << " : " << mapItr->second << endl;
	}

	if (coupleAge.find("Shashank") != coupleAge.end())
		cout << "Found shashank from the list" << endl;
	else
		cout << "Not found" << endl;
	return 0;
}



