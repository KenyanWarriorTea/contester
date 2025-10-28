#include <iostream>
#include <string>

using namespace std;

int func(string arr[], string find, int left, int right) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == find) return mid + 1; 
    if (arr[mid] < find) return func(arr, find, mid + 1, right);
    else return func(arr, find, left, mid - 1);
}

int main() {
    int size;
    cin >> size;

    string find;
    string *arr = new string[size];

    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cin >> find;

    cout << func(arr, find, 0, size - 1) << endl;

    delete [] arr;

    return 0;
}
