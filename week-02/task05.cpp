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

    int maxValue = -2147483648;
    int countMax = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == maxValue) {
            countMax++;
        }
    }

    cout << countMax;

    return 0;
}

