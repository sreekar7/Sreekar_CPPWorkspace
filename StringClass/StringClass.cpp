#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverseStr(string &str) {
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

int main(int argc, char** argv) {
	string s1 = "GOPANNAGARI DEESHNA SHARMA";

	string s2 = "Sreeks";
	//reverseStr(s2);
	reverse(s2.begin(), s2.end()); //In-built function.
	cout << "the string reversed as : " << s2 << endl;

	std::string::reverse_iterator rit;
	for (rit = s2.rbegin(); rit != s2.rend(); rit++) {
		cout << *rit << endl;
	}
	cout << "Again reversing the string: " << s2 << endl; //skeerS

	std::string::iterator it;
	for (it = s2.begin(); it != s2.end(); it++) {
		cout << *it << endl;
	}
	cout << "String as declared : " << s2 << endl; //skeerS

	//size & length returns same
	cout << "String size : " << s1.size() << endl;
	cout << "String length : " << s1.length() << endl;

	for (char c : s1) {
		cout << c << ' ';
	}
	cout << endl << endl;

	s1.insert(s1.begin() + 11, 'G');
	cout << "After insering into the string: " << s1 << " size [" << s1.size()
			<< "]" << endl << endl;

	s1.erase(s1.begin() + 11);
	cout << "After removing from the string: " << s1 << " size [" << s1.size()
			<< "]" << endl << endl;

	s1.replace(12, 14, "DEESHU");
	cout << "After replacing the string: " << s1 << " size [" << s1.size()
			<< "]" << endl << endl;

	//Find the substr
	cout << "Find the substring : " << s1.substr(12, 6) << endl;

	//find & rfind TODO
	size_t pos = s1.find("D");
	pos = s1.rfind("G");
	cout << "s1[12] : " << s1[12] << ", the whole string is : " << s1 << endl;

	cout << "Finding Position of \'D\' in String :" << pos << endl;
	cout << "Finding Position of \'D\' from reverse in the String :" << pos
			<< endl;

}
