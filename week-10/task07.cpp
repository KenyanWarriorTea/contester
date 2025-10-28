#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    int upperCount = 0, lowerCount = 0;
    for (char ch : str) {
        if (islower(ch)) lowerCount++;
        else if (isupper(ch)) upperCount++;
    }

    if (upperCount > lowerCount)
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << str;
    return 0;
}
