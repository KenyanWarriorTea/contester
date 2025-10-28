#include <iostream>
#include <cstring>

using namespace std;

void groupByThree(char* text, int len) {
    int idx = 0;

    if(len % 3 == 1) {
        cout << text[idx] << " ";
        idx++;
    } else if(len % 3 == 2) {
        cout << text[idx] << text[idx + 1] << " ";
        idx += 2;
    }

    for(int j = idx; j < len; j += 3) {
        cout << text[j] << text[j + 1] << text[j + 2] << " ";
    }
}

int main() {
    char input[101];
    cin >> input;

    int length = strlen(input);

    groupByThree(input, length);

    return 0;
}
