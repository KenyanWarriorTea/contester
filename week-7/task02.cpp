#include <iostream>
#include <cstring>

using namespace std;

void replaceExclamation(char* text, int len) {
    for(int i = 0; i < len; i++) {
        if(text[i] == '!') text[i] = '.';
        cout << text[i];
    }
}

int main() {
    char input[101];
    cin.getline(input, 101);

    int length = strlen(input);

    replaceExclamation(input, length);

    return 0;
}
