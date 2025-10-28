#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, needFind;

    getline(cin, str);
    cin >> needFind;

    size_t pos = str.find(needFind);

    if(pos == 0)
        cout << -1 << endl;
    else
        cout << pos << endl;

    return 0;
}
