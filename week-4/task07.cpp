#include <iostream>
#include <algorithm>

using namespace std;

void rowWithMostPositives(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    int* positivesCount = new int[rows];

    for (int i = 0; i < rows; i++) {
        positivesCount[i] = 0;
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > 0) positivesCount[i]++;
        }
    }

    int maxPos = *max_element(positivesCount, positivesCount + rows);
    int rowIndex = 0;
    int equalCount = 1;

    for (int i = 0; i < rows; i++) {
        if (positivesCount[i] == maxPos) rowIndex = i;
        if (i > 0 && positivesCount[i] == positivesCount[i - 1]) equalCount++;
    }

    if (equalCount == rows)
        cout << "Numbers are equal";
    else
        cout << rowIndex + 1;

    for (int i = 0; i < rows; i++)
        delete[] matrix[i];
    delete[] matrix;
    delete[] positivesCount;
}

int main() {
    int sizeN, sizeM;
    cin >> sizeN >> sizeM;
    rowWithMostPositives(sizeN, sizeM);
    return 0;
}
