#include <iostream>
#include <cstring>

using namespace std;

bool areStringsEqual(char* first, char* second) {
    return strcmp(first, second) == 0;
}

int main() {
    char str1[100], str2[100];

    cin >> str1 >> str2;

    cout << (areStringsEqual(str1, str2) ? "YES" : "NO");

    return 0;
}
