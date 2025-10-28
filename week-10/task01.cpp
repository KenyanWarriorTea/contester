#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, maxStr;

    cin >> str;
    maxStr = str;

    int n = str.length();
    for(int i = 0; i < n - 1; i++) {
        char lastChar = str.back();
        str.pop_back();
        str.insert(str.begin(), lastChar);

        if(str > maxStr) maxStr = str;
    }

    cout << maxStr << endl;

    return 0;
}
