#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void func(char *str) {
    int size = strlen(str);
    double sumLengths = 0;
    int wordCount = 0;

    char *hashPos = strchr(str, '#');
    if(hashPos) {
        *hashPos = ' ';
        *(hashPos + 1) = '#';
    }

    char *token = strtok(str, " 0123456789,.!?-");
    while(token != NULL && strchr(token, '#') == NULL) {
        sumLengths += strlen(token);
        wordCount++;
        token = strtok(NULL, " 0123456789,.!?-");
    }

    double arithmeticAverage = wordCount > 0 ? sumLengths / wordCount : 0;

    cout << fixed << setprecision(9) << arithmeticAverage;
}

int main() {
    char str[1001];

    cin.getline(str, 1001);

    func(str);

    return 0;
}
