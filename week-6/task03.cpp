#include <iostream>
#include <cstring>

using namespace std;

int x;

int countCharacters(char arr[100][20], char* ch, int* c) {
    for(int y = 0; y < x; y++) {
        c[y] = 0;
        int len = strlen(arr[y]);
        for(int i = 0; i < len; i++)
            if(arr[y][i] == ch[y]) c[y]++;
    }

    for(int i = 0; i < x; i++)
        cout << c[i] << " " << ch[i] << " in " << arr[i] << endl;

    return 0;
}

int main() {
    char arr[100][20], ch[100];
    int c[100];

    cin >> x;

    for(int i = 0; i < x; i++)
        cin >> ch[i] >> arr[i];

    countCharacters(arr, ch, c);

    return 0;
}
