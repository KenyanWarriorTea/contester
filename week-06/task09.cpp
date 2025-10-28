#include <iostream>

using namespace std;

bool isPalindrome(char* text, int len) {
    int left = 0, right = len - 1;

    while (left < right) {
        if (text[left] != text[right]) return false;
        left++;
        right--;
    }

    return true;
}

int main() {
    char input[100];
    cin >> input;

    int length = 0;
    while (input[length] != '\0') length++;

    cout << (isPalindrome(input, length) ? "YES" : "NO");

    return 0;
}
