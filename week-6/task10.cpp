#include <iostream>

using namespace std;

int caesarDecrypt(char* text, int len, int shift) {
    for(int i = 0; i < len; i++) {
        char ch = text[i] - shift;
        if(ch < 'A') ch += 26;
        text[i] = ch;
        cout << text[i];
    }
    return 0;
}

int main() {
    char message[100];
    int key;

    cin.getline(message, 100);
    cin >> key;

    int msgLen = 0;
    while(message[msgLen] != '\0') msgLen++;

    caesarDecrypt(message, msgLen, key);

    return 0;
}
