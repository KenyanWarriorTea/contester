#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, needFind;

    getline(cin, str);
    cin >> needFind;

    transform(str.begin(), str.end(), str.begin(), ::toupper);
    transform(needFind.begin(), needFind.end(), needFind.begin(), ::toupper);

    size_t pos = str.find(needFind);

    if(pos == 0)
        cout << -1 << endl;
    else
        cout << pos << endl;

    return 0;
}
