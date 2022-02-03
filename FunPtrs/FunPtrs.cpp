/*
 * FunPtrs.cpp
 *
 *  Created on: 05-Jan-2018
 *      Author: Deeshu
 */

#include <iostream>

using namespace std;

void Show(){
	cout << "Testing Function Ptrs" << endl;
}

int main(){

	Show();

	void (*pShow)(); // The return type should be same to which the pointer pointing to.
	pShow = Show; // TODO: same as by assigning address of the function to the ptr like : pShow = &Show;

/* Simply below does work instead of above 2 lines
	void (*pShow)() = Show;
*/

	(*pShow)(); // or simply call pShow()
	pShow();

	return 0;
}


