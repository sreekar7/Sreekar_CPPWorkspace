#include <iostream>
#include <string>

using namespace std;

template <typename T>  // (or) template<class T>
T maxOf (T a, T b){
	return ( a>b ? a : b );
}

template<class T>
void print(T n){
	cout << "template version: " << n << endl;
}

void print(int value){
	cout << "Non template version: " << value << endl;
}
int main(int argc, char **argv) {
	//cout << "The max value is :" << maxOf<int>(4, 7); // maxOf(4, 7) also works => as placeHolder int can be omitted and compiler recognizes beased on the argument list.
	//cout << "the max value is :" << maxOf(4,7);
	//cout << "the max value is :" << maxOf<const char*>("a", "b"); //a
	cout << "the max value is :" << maxOf<string>("a", "b") << endl << endl; //b

	print<string>("Hi Amki");
	print("I can type strings like this also by omitting type as string");
	print<int>(5);
	print(6); // Non template version will be called as the most appropriate version is available.
	print<>(7); // TODO:template version will be called due to type inference.
	return 0;
}
