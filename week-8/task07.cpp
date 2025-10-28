#include <iostream>
#include <cstring>

using namespace std;

struct UNT {
    int ID;
    char *Name;
    char *Surname;
    int Subject;
    char *SpecialCase;
};

void sortFunction(UNT *studentList, int N);

int main() {
    int sizeN, sizeM;

    cin >> sizeN >> sizeM;
    UNT *studentList = new UNT[sizeN];

    for(int i = 0; i < sizeN; i++) {
        cin >> studentList[i].ID;

        studentList[i].Name = new char[32];
        studentList[i].Surname = new char[32];
        cin >> studentList[i].Name >> studentList[i].Surname;

        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        studentList[i].Subject = s1 + s2 + s3 + s4;

        studentList[i].SpecialCase = new char[4];
        cin >> studentList[i].SpecialCase;
    }

    sortFunction(studentList, sizeN);

    for (int i = 0; i < sizeM; i++)
        cout << studentList[i].ID << " " << studentList[i].Name << " " << studentList[i].Surname << " " << studentList[i].Subject << endl;

    for(int i = 0; i < sizeN; i++) {
        delete [] studentList[i].Name;
        delete [] studentList[i].Surname;
        delete [] studentList[i].SpecialCase;
    }

    delete [] studentList;

    return 0;
}

void sortFunction(UNT *studentList, int N) {
    int index = 0;
    for (int i = 0; i < N; i++) {
        if(strcmp(studentList[i].SpecialCase, "YES") == 0) {
            swap(studentList[index], studentList[i]);
            index++;
        }
    }

    for(int i = index; i < N - 1; i++) {
        for(int j = i + 1; j < N; j++) {
            if(studentList[i].Subject < studentList[j].Subject) {
                swap(studentList[i], studentList[j]);
            }
        }
    }

    for(int i = 0; i < index - 1; i++) {
        for(int j = i + 1; j < index; j++) {
            if(studentList[i].Subject < studentList[j].Subject) {
                swap(studentList[i], studentList[j]);
            }
        }
    }
}
