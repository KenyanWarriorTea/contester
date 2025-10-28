#include <iostream>

using namespace std;

bool checkExpression(char str[], int size) {
    bool expectNumber = true;

    for (int i = 0; i < size; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            expectNumber = false;
        } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            if (expectNumber) return false;
            expectNumber = true;
        } else {
            return false;
        }
    }

    return !expectNumber;
}

int main() {
    int size;
    char str[1001];

    cin >> size;
    cin >> str;

    if (checkExpression(str, size))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
