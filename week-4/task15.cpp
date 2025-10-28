#include <iostream>

using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    int sec1 = (h1 * 3600) + (m1 * 60) + s1;
    int sec2 = (h2 * 3600) + (m2 * 60) + s2;

    int diff = sec2 - sec1;

    int hours = diff / 3600;
    diff %= 3600;
    int minutes = diff / 60;
    int seconds = diff % 60;

    if(hours < 10) cout << "0";
    cout << hours << ":";

    if(minutes < 10) cout << "0";
    cout << minutes << ":";

    if(seconds < 10) cout << "0";
    cout << seconds;

    return 0;
}
