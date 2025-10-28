#include <iostream>
#include <cstring>

using namespace std;

int func(char *str) {
    int size = strlen(str);
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < size; i++) {
        int digit = str[i] - '0';
        if(i % 2 == 0) sum1 += digit;
        else sum2 += digit;
    }

    int diff = sum1 - sum2;

    if(sum1 == sum2) return 1;
    if(diff % 11 == 0) return 1;

    return 0;
}

int main() {
    char str[1000];
    cin >> str;

    cout << (func(str) ? "YES" : "NO");

    return 0;
}
