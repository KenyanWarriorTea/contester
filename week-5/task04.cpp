#include <iostream>
using namespace std;

void fillSpiral(int** arr, int size, int xStart, int yStart, int xEnd, int yEnd, int& value) {
    if (xStart > xEnd || yStart > yEnd) return;

    for (int y = yStart; y <= yEnd; y++)
        arr[xStart][y] = value++;
    for (int x = xStart + 1; x <= xEnd; x++)
        arr[x][yEnd] = value++;
    if (xStart < xEnd) 
        for (int y = yEnd - 1; y >= yStart; y--)
            arr[xEnd][y] = value++;
    if (yStart < yEnd)
        for (int x = xEnd - 1; x > xStart; x--)
            arr[x][yStart] = value++;

    fillSpiral(arr, size, xStart + 1, yStart + 1, xEnd - 1, yEnd - 1, value);
}

int main() {
    int size;
    cin >> size;

    if(size == 1) {
        cout << "1\n";
        return 0;
    }
    if(size == 2) {
        cout << "1 2\n4 3\n";
        return 0;
    }

    int** arr = new int*[size];
    for (int i = 0; i < size; i++)
        arr[i] = new int[size];

    int value = 1;
    fillSpiral(arr, size, 0, 0, size - 1, size - 1, value);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < size; i++)
        delete[] arr[i];
    delete[] arr;

    return 0;
}
