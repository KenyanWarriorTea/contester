#include <iostream>

using namespace std;

int sumBetweenZeros(int* numbers, int length) {
    int sum = 0;
    bool counting = false;
    bool firstZeroFound = false;

    for (int i = 0; i < length; i++) {
        if (numbers[i] == 0) {
            if (!firstZeroFound) {
                firstZeroFound = true;
                counting = true;
            } else {
                counting = false;
            }
        } else if (counting && firstZeroFound) {
            sum += numbers[i];
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumBetweenZeros(arr, n);

    delete[] arr;
    return 0;
}
