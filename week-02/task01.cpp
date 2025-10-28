#include <iostream>
using namespace std;

int main() {
    int arr[100];
    const int stopVal = -1;
    const int skipVal = 0;
    int count = 0;

    for (int i = 0; i < 100; i++) {
        int val;
        cin >> val;

        if (val == skipVal) {
            continue;
        }

        if (val < stopVal) {
            i--;
            continue;
        }

        if (val == stopVal) {
            break;
        }

        arr[count++] = val;
    }

    cout << count << endl;

    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
