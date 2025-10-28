#include <iostream>
#include <cstring>

using namespace std;

void addVeryLongIntegers(char *a, char *b, char *c, int size) {
    int carry = 0;
    char result[1001]; 
    result[size] = '\0';

    for(int i = size - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if(carry) cout << '1';
    cout << result;
}

void convert(char *src, char *dest, int size) {
    int len = strlen(src);
    int diff = size - len;
    for(int i = 0; i < diff; i++)
        dest[i] = '0';
    for(int i = 0; i < len; i++)
        dest[diff + i] = src[i];
    dest[size] = '\0';
}

int main() {
    char x[1000], y[1000];
    char a[1000], b[1000], c[1000];

    cin >> x >> y;

    int sizeA = strlen(x);
    int sizeB = strlen(y);
    int size = max(sizeA, sizeB);

    convert(x, a, size);
    convert(y, b, size);

    addVeryLongIntegers(a, b, c, size);

    return 0;
}
