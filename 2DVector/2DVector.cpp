/*
 * 2DVector.cpp
 *
 *  Created on: 30-Dec-2017
 *      Author: Deeshu
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){

	vector< vector<int> > grid(3, vector<int>(4));
	grid[1].push_back(9); //Pushing the element to the end in the 2nd row

	for (int row=0; row< grid.size(); row++){
		for (int col=0; col < grid[row].size(); col++){
			cout << grid[row][col] << flush;  // TODO: know about this
		}
		cout << endl;
	}

	return 0;
}

