/*
 * ReadingNwritingBinaryFiles.cpp
 *	Structure padding
 *  Created on: 30-Dec-2017
 *      Author: Deeshu
 */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#pragma pack(push, 1)  //TODO: Know about Pragma pack

struct person {
	string name;
	int age;
	double weight;
};

#pragma pack(pop)

int main(int argc, char** argv){

	string fileName = "rawtext.bin";

	//// Writing to the file //////
	person p1 = {"Sharma", 30, 65.0};

	ofstream output;
	output.open(fileName, ios::binary);

	if(output.is_open()){
		output.write(reinterpret_cast<char *>(&p1), sizeof(person));  //TODO: Know about reinterpret_cast<>
		output.close();
	}
	else
		cout << "Could not able to open the file" << endl;


	//// Reading from the file //////
	person p2 = {};

	ifstream input;
	input.open(fileName, ios::binary);

	if(input.is_open()){
		input.read(reinterpret_cast<char *>(&p2), sizeof(person));
		input.close();
	}
	else
		cout << "Could not able to open the file" << endl;

	cout << "Reading from binary file to the structure: "
		 << p2.name << ", " << p2.age << ", " << p2.weight << endl;
	return 0;
}
