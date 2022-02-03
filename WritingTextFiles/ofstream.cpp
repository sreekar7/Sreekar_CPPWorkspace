
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	//ofstream outf; This works similarly.
	fstream outf;

	const string fileName = "test.txt";

	outf.open(fileName);
	if(outf.is_open()){
		outf << "Hi Deeshu !!" << endl;
		for (int i : {1, 2, 3, 4, 5}){
			outf << "I'm at Line NO: [" << i << "]" << endl;
		}
		outf.close();
	}
	else
		cout << "Could n't creat the file !!" << endl;
	return 0;
}



