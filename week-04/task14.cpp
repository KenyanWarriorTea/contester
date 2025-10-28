#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char text[101], res[101];
    cin >> text;

    int n = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        char c = text[i];
        if(c >= 'A' && c <= 'Z') c += 32;
        else if(c >= 'a' && c <= 'z') c -= 32;

        if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            res[n] = c;
            n++;
        }
    }
    res[n] = '\0';

    cout << res;

    return 0;
}
