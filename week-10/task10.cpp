#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, str2;
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (char c : str) {
        if (isalpha(c)) str2 += c;
    }

    if (!str2.empty()) {
        char last = str2.back();
        string vowels = "aeiouy";

        if (vowels.find(last) != string::npos)
            cout << "YES";
        else
            cout << "NO";
    } else {
        cout << "NO"; 
    }

    return 0;
}
