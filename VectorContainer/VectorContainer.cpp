#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv){


	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for(int i=0; i<10000; i++) {

		if(numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}

		numbers.push_back(i);
	}

	numbers.reserve(100000);
	cout << numbers[2] << endl;
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;




//	vector<int> vi = {1, 2, 3, 4, 5, 6, 7};
//	cout << "Vector<int> Size: " << vi.size() << endl;
//
//	vector<int>::iterator itrbegin= vi.begin();
//	vector<int>::iterator itrend = vi.end();
//
//	for ( auto it = itrbegin; it < itrend; ++it){
//			cout << *it << ' ';
//	}
//	cout << endl;
//
//	cout << "Vector<int> front element is : " << vi.front() << endl;
//	cout << "Vector<int> back element is : " << vi.back() << endl;
//
//	cout << "Element at 5: " << vi[4] << endl;
//	cout << "Element at 5: " << vi.at(4) << endl;
//
//	cout << "range-based for loop : " << endl;
//	for(int & i : vi){
//		cout << i << ' ';
//	}
//	cout << endl;
//
//	cout << "Inserting 24 at 4th pos" << endl;
//	vi.insert(vi.begin()+4, 24);
//	cout << "Now the Size is : " << vi.size() << endl;
//	cout << "vi[4] : " << vi[4] << endl;
//
//	cout << "erasing 24 at 4th pos" << endl;
//	vi.erase(vi.begin() + 4);
//	cout << "After removing the size: " << vi.size();
//	cout << "vi[4] : " << vi[4] << endl;
//
//	vi.push_back(35);
//	cout << "The elements are now in vector: " << endl;
//
//	for(int & i :vi){
//		cout << i << ' ' << endl;
//	}
//
//	//Vector of strings
//
//	vector<string> vs = {"one", "two", "three", "four", "five"};
//	cout << "Elements in the Vector String :" << endl;
//	for (auto &s : vs){
//		cout << s << ' ';
//	}
//	cout << endl;

}



