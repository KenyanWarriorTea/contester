#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    string vowels = "aoyeui";

    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    string result;
    for(char c : str) {
        if(vowels.find(c) == string::npos) {
            result += '.';
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
