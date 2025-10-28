#include <iostream>
using namespace std;

bool isComposite[1000090];

int main() {
    int x;
    cin >> x;

    isComposite[0] = true;
    isComposite[1] = true;

    for (long long i = 2; i <= x; i++) {
        if (!isComposite[i] && i * i <= x) {
            for (long long j = i * i; j <= x; j += i)
                isComposite[j] = true;
        }
    }

    for (int i = 2; i <= x; i++)
        if (!isComposite[i]) cout << i << " ";

    return 0;
}
