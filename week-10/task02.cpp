#include <iostream>
#include <string>

using namespace std;

int main() {
    int size;
    cin >> size;

    string* str = new string[size];

    for(int i = 0; i < size; i++) {
        cin >> str[i];
        int len = str[i].length();
        if(len > 10) {
            str[i].replace(1, len - 2, to_string(len - 2));
        }
    }

    for(int i = 0; i < size; i++)
        cout << str[i] << endl;

    delete[] str;

    return 0;
}
