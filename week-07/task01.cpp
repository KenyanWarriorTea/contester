#include <iostream>
#include <cstring>

using namespace std;

bool containsIITU(char* text, int length) {
    for(int i = 0; i <= length - 4; i++) {
        if(text[i] == 'A' && text[i+1] == 'I' && text[i+2] == 'T' && text[i+3] == 'U')
            return true;
    }
    return false;
}

int main() {
    char input[1001];
    cin >> input;

    int len = strlen(input);
    for(int i = 0; i < len; i++) input[i] = toupper(input[i]);

    if(containsAITU(input, len)) cout << "YES";
    else cout << "NO";

    return 0;
}
