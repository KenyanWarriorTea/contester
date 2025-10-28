#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char text[101];
    cin >> text;

    for(int i = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z') text[i] += 32;
        else if(text[i] >= 'a' && text[i] <= 'z') text[i] -= 32;
    }

    cout << text;

    return 0;
}
