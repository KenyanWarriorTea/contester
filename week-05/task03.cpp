#include <iostream>
#include <string>

using namespace std;

void readReverse(int n) {
    if(n == 0) return;

    string s;
    cin >> s;
    readReverse(n - 1);
    cout << s << endl;
}

int main() {
    int x;
    cin >> x;
    readReverse(x);
    return 0;
}
