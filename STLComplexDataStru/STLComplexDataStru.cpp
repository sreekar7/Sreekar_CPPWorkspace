/*
 * STLComplexDataStru.cpp
 *
 *  Created on: 02-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

	//Map of Vectors to represents the Individual scoreCard in diff matches
	map<string,vector<int>> scores;

	scores["SreekS"].push_back(10);
	scores["Amki"].push_back(10);
	scores["Achu"].push_back(20);
	scores["Deeshu"].push_back(30);
	scores["Deeshu"].push_back(100);
	scores["Deeshu"].push_back(200);
	scores["SreekS"].push_back(200);

	for(auto itr = scores.begin(); itr != scores.end(); itr++){
		string name = itr->first;
		vector<int> scoreCard = itr->second;

		cout << "Name : " << name << " has scored - " << flush;
		for(vector<int>::iterator itr2 = scoreCard.begin(); itr2 != scoreCard.end(); itr2++){
			cout << *itr2 << " " << flush;
		}
		cout << endl;
	}
	return 0;
}


