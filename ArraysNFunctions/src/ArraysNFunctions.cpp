//============================================================================
// Name        : ArraysNFunctions.cpp
// Author      : Sreekar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//All funs below serves the same : Passing Arrays to Functions
void show1(int nElements, string texts[]) {
	for (auto i = 0; i < nElements; i++) {
		cout << texts[i] << " " << flush;
	}
}

void show2(int nElements, string *texts) {
	for (auto i = 0; i < nElements; i++) {
		cout << texts[i] << " " << flush;
	}
}

void show3(string (&texts)[3]) {
	for (unsigned i = 0; i < sizeof(texts)/sizeof(string); i++) {
		cout << texts[i] << " " << flush;
	}
}
int main() {

	string texts[] = { "Apple", "Oranges", "Bananas" };

	show1(3, texts);
	show2(3, texts);
	show3(texts);

	return 0;
}
