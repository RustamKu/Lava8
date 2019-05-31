#include<iostream>
#include<vector>
#include <queue>  
#include <string>
#include"Complex.h"

using namespace std;
int main() {
	vector<string> students;
	list<Complex>complex;
	queue<string>car;

	cout << "Enter student's :" << endl;
	string stud = "";
	do
	{
		getline(cin, stud);
		students.push_back(stud);
	} while (stud != "");
	cout << "students " << endl;
	for (int i = 0; i < students.size(); i++)
		cout << students[i] << endl;

	cout << endl;
	Complex C;
	C.entercomplex();
	complex.push_back(C);
	for (int i = 0; i < complex.size(); i++) {
		cout << "Rez = " << complex.front().rez << " Img = " << complex.front().imz << endl;
		complex.front().modulecomplex();
		complex.front().argumentcomplex();
		complex.pop_front();
	}

	cin.ignore();
	cout << endl;
	cout << endl << "Enter car: ";
	string c = "";
	cout << endl;
	do
	{
		getline(cin, c);
		car.push(c);
	} while (c != "");
	cout << "Car in a queue:" << endl;
	while (!car.empty())
	{
		string val = car.front();
		car.pop();
		cout << val << " " << endl;
	}
	cout << endl;

	return 0;
}