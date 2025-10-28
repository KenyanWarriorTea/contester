#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[100][200], ch[100];
    int counts[100] = {0};

    for(int i = 0; i < n; i++)
        cin >> ch[i] >> arr[i];

    for(int i = 0; i < n; i++) {
        for(int j = 0; arr[i][j] != '\0'; j++)
            if(arr[i][j] == ch[i]) counts[i]++;
    }

    for(int i = n - 1; i >= 0; i--)
        cout << counts[i] << " " << ch[i] << " in " << arr[i] << endl;

    return 0;
}
