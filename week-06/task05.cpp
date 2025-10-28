#include <iostream>

using namespace std;

void printOddPositions(int* numbers, int length) {
    for (int idx = 0; idx < length; idx++) {
        if (idx % 2 == 0) {
            cout << numbers[idx] << " ";
        }
    }
}

void printEvenPositions(int* numbers, int length) {
    for (int idx = 0; idx < length; idx++) {
        if (idx % 2 != 0) {
            cout << numbers[idx] << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;

    int* data = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    printOddPositions(data, n);
    printEvenPositions(data, n);

    delete[] data;
    return 0;
}
