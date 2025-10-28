#include <iostream>
using namespace std;

void readReverse(int n) {
    if(n == 0) return;

    int num;
    cin >> num;
    readReverse(n - 1);
    cout << num << " ";
}

int main() {
    int x;
    cin >> x;
    readReverse(x);
    return 0;
}
