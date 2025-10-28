#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    str.erase(unique(str.begin(), str.end()), str.end());

    if(!str.empty() && str[0] == ' ') str.erase(str.begin());
    if(!str.empty() && str.back() == ' ') str.erase(str.end() - 1);

    cout << str << '\n';

    return 0;
}
