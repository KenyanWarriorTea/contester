#include <iostream>
#include <algorithm>

using namespace std;

int sumAfterMaxPositive(int* numbers, int length) {
    int sum = 0;
    bool maxFound = false;
    int maximum = *max_element(numbers, numbers + length);

    for (int i = length - 1; i >= 0; i--) {
        if (numbers[i] == maximum) maxFound = true;
        if (maxFound && numbers[i] > 0) sum += numbers[i];
    }

    return sum - maximum;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << sumAfterMaxPositive(arr, n);

    delete[] arr;
    return 0;
}
