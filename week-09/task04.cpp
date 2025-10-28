#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, needFind;
    getline(cin, str);
    cin >> needFind;

    for (int index = 0; index < needFind.length(); index++) {
        size_t pos;
        while ((pos = str.find(needFind[index])) != string::npos) {
            str.replace(pos, 1, "*");
        }
    }

    cout << str << endl;

    return 0;
}
