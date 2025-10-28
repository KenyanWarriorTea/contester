#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1 || n > 1000)
        return 0;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minVal = arr[0];
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] <= minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    cout << minIndex;
    return 0;
}
