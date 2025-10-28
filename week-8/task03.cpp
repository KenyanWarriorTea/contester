#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct Student {
	int ID;
	char *surname;
	double grade;
};

int main() {
	int size;

	cin >> size;

	Student *school = new Student[size];

	for(int i = 0; i < size; i++) {
		cin >> school[i].ID;

		school[i].surname = new char[64];
		cin >> school[i].surname;

		cin >> school[i].grade;
	}

	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			if(school[j].grade < school[j + 1].grade || 
			  (school[j].grade == school[j + 1].grade && school[j].ID > school[j + 1].ID)) {
				swap(school[j], school[j + 1]);
			}
		}
	}

	double MAX = school[0].grade;

	for(int i = 0; i < size; i++) {
		if(school[i].grade == MAX)
			cout << school[i].ID << " " << school[i].surname << " " << school[i].grade << endl;
	}

	for(int i = 0; i < size; i++) {
		delete [] school[i].surname;
	}

	delete [] school;

	return 0;
}
