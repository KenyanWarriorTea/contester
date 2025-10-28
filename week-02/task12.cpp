#include <iostream>
using namespace std;

int main() {
    int size, i, medianIndex, modeIndex = 0;
    int freq[9] = {0}, mostFreq = 0;
    double total = 0;
    int values[] = {1,2,3,4,5,6,7,8,9};
    int arr[99] = {6,7,8,9,8,7,8,9,8,9,7,8,9,5,9,8,7,8,7,8,
                   6,7,8,9,3,9,8,7,8,7,7,8,9,8,9,8,9,7,8,9,
                   6,7,8,7,8,7,9,8,9,2,7,8,9,8,9,8,9,7,5,3,
                   5,6,7,2,5,3,9,4,6,4,7,8,9,6,8,7,8,9,7,8,
                   7,4,4,2,5,3,8,7,5,6,4,5,6,1,6,5,7,8,7};

    cin >> size;
    medianIndex = 99 / 2;

    if (size >= 1 && size <= 1000) {
        for (int n = 0; n < 9; n++)
            for (i = 0; i < 99; i++)
                if (arr[i] == values[n]) freq[n]++;

        for (i = 0; i < 9; i++)
            if (freq[i] >= mostFreq) {
                mostFreq = freq[i];
                modeIndex = i;
            }

        for (i = 0; i < 99; i++)
            total += arr[i];

        cout << total / 99 << endl;

        if (99 % 2 == 0)
            cout << double(arr[medianIndex - 1] + arr[medianIndex]) / 2 << endl;
        else
            cout << arr[medianIndex] << endl;

        cout << values[modeIndex];
    }

    return 0;
}
