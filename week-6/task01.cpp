#include <iostream>
#include <algorithm>

using namespace std;

int swapAndPrint(unsigned int* arr) {
    swap(arr[0], arr[1]);
    cout << arr[0] << " " << arr[1];
    return 0;
}

int main() {
    unsigned int* arr = new unsigned int[2];
    cin >> arr[0] >> arr[1];

    swapAndPrint(arr);

    delete[] arr;

    return 0;
}
