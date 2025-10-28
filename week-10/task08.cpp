#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "hello";
    int idx = 0;

    for (char ch : s) {
        if (ch == target[idx]) idx++;
        if (idx == target.length()) break;
    }

    cout << (idx == target.length() ? "YES" : "NO");
    return 0;
}
