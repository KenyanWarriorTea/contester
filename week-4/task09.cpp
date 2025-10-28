#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char arr[2][200], ch[2];
    int count[2] = {0};

    for(int i = 0; i < 2; i++)
        cin >> ch[i];

    for(int i = 0; i < 2; i++)
        cin >> arr[i];

    for(int i = 0; i < 2; i++) {
        int len = strlen(arr[i]);
        for(int j = 0; j < len; j++)
            if(arr[i][j] == ch[i]) count[i]++;
    }

    for(int i = 0; i < 2; i++)
        cout << count[i] << " " << ch[i] << " characters in " << arr[i] << endl;

    return 0;
}
