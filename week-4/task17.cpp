#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int size;
    cin >> size;

    int prev, first, curr;
    cin >> first;
    prev = first;

    int minDiff = 1000000;
    int s1 = 1, s2 = 2;

    for(int i = 2; i <= size; i++) {
        cin >> curr;
        int diff = abs(curr - prev);
        if(diff < minDiff) {
            minDiff = diff;
            s1 = i - 1;
            s2 = i;
        }
        prev = curr;
    }

    // проверка разницы между последним и первым элементом
    int lastDiff = abs(curr - first);
    if(lastDiff < minDiff) {
        s1 = size;
        s2 = 1;
    }

    cout << s1 << " " << s2;

    return 0;
}
