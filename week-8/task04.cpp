#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
	int ID;
	double grade;
};

int main() {
	int size;

	cin >> size;

	Student *school = new Student[size];

	for(int i = 0; i < size; i++)
		cin >> school[i].ID >> school[i].grade;

	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			if(school[j].grade < school[j + 1].grade ||
			   (school[j].grade == school[j + 1].grade && school[j].ID > school[j + 1].ID)) {
				swap(school[j], school[j + 1]);
			}
		}
	}

	for(int i = 0; i < size; i++)
		cout << school[i].ID << " " << school[i].grade << endl;

	delete [] school;

	return 0;
}
