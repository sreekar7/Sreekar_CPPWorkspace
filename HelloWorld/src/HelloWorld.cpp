/*#include <iostream>
using namespace std;

struct student{
	int rollNo;
	char grade;
};

void display(student s);
void show(student *s);

void show(student *strct){

	strct->grade = 'B';
	strct->rollNo = 2;

	cout << "Accessing via ptrs: Student's Grade is - " << strct->grade << endl;
	cout << "Accessing via ptrs: Student's Roll No is - " << strct->rollNo << endl;

}

void display(student stu){
	stu.rollNo = 1;
	stu.grade = 'A';
	cout << "Accessing via dot op: Student's Grade is - " << stu.grade << endl;
	cout << "Accessing via dot op: Student's Grade is - " << stu.rollNo << endl;
}

int main(){
	student student1, student2;

	display(student1); cout << endl;
	show(&student2);

	return 0;
}*/

#include <cstdio>
#include <iostream>

using namespace std;

class Sample{
private:
	int a;
public:
	Sample() { a=0; }
	Sample(const int &ia) {
		a = ia;
	}
	void setA(const int & ia);
	int getA();
};

void Sample::setA(const int & ia){
	a = ia;
}

int Sample::getA(){
	return a;
}

int main(){

	Sample a;
	a.setA(21);
	printf("The value is: %d\n", a.getA());

}
