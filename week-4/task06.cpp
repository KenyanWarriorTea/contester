#include <iostream>

using namespace std;

void compareNegatives(int n) {
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    int neg1 = 0, neg2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        if (arr1[i] < 0) neg1++;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] < 0) neg2++;
    }

    if (neg1 < neg2)
        cout << "Number of positives in the first array is greater";
    else if (neg1 > neg2)
        cout << "Number of positives in the second array is greater";
    else
        cout << "Numbers are equal";

    delete[] arr1;
    delete[] arr2;
}

int main() {
    int size;
    cin >> size;
    compareNegatives(size);
    return 0;
}
