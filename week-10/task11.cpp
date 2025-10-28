#include <iostream>

using namespace std;

int main() {
    int num[15] = {0}; 
    int cards[5];

    for (int i = 0; i < 5; i++) cin >> cards[i];

    for (int i = 0; i < 5; i++) num[cards[i]]++;

    int pairs = 0, threes = 0, fours = 0, singles = 0;

    for (int i = 1; i <= 14; i++) {
        if (num[i] == 4) fours++;
        else if (num[i] == 3) threes++;
        else if (num[i] == 2) pairs++;
        else if (num[i] == 1) singles++;
    }

    if (fours == 1) cout << "Four of a Kind" << endl;
    else if (threes == 1 && pairs == 1) cout << "Full House" << endl;
    else if (threes == 1) cout << "Three of a Kind" << endl;
    else if (pairs == 2) cout << "Two Pairs" << endl;
    else if (pairs == 1) cout << "One Pair" << endl;
    else {
        bool straight = false;
        for (int i = 1; i <= 10; i++) {
            if (num[i] && num[i+1] && num[i+2] && num[i+3] && num[i+4]) {
                straight = true;
                break;
            }
        }
        if (straight) cout << "Straight" << endl;
        else cout << "Nothing" << endl;
    }

    return 0;
}
