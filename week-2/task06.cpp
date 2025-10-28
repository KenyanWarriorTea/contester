#include <iostream>
using namespace std;

int main() {
    int n, countA = 0;
    cin >> n;

    if (n >= 1 && n <= 1000) {
        char arr[1000];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            if (arr[i] == 'A')
                countA++;

        cout << countA;
    }

    return 0;
}
