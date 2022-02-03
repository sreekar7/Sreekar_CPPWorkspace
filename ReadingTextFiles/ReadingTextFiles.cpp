/*
 * ReadingTextFiles.cpp
 *
 *  Created on: 30-Dec-2017
 *      Author: Deeshu
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){

	string fileName = "test.txt";

	/* fstream ipFileN;
	ipFileN.open(fileName, ios::in); in for reading*/

	ifstream ipFileN;
	ipFileN.open(fileName);

	if(ipFileN.is_open()){

		string line;
		while(ipFileN){
			getline(ipFileN, line);
			cout << line << endl;
		}
		ipFileN.close();
	}
	else
		cout << "could not open the file: " << fileName << endl;

	return 0;
}


