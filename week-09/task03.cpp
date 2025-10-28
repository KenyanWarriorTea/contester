#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, needFind;
    getline(cin, str);
    cin >> needFind;

    int i = -1;
    size_t pos;
    size_t size = needFind.length();

    while((pos = str.find(needFind)) != string::npos) {
        i = static_cast<int>(pos);
        str.replace(pos, size, string(size, '#'));
    }

    cout << i << endl;

    return 0;
}
