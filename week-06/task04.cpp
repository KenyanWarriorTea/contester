#include <iostream>
#include <cstring>

using namespace std;

int totalPairs;

int countChars(char words[100][20], char letters[100], int counts[100]) {
    for (int row = 0; row < totalPairs; row++) {
        counts[row] = 0;
        int len = strlen(words[row]);
        for (int idx = 0; idx < len; idx++) {
            if (words[row][idx] == letters[row]) {
                counts[row]++;
            }
        }
    }

    for (int row = 0; row < totalPairs; row++) {
        cout << counts[row] << " " << letters[row] << " in " << words[row] << endl;
    }

    return 0;
}

int main() {
    char words[100][20];
    char letters[100];
    int counts[100];

    cin >> totalPairs;

    for (int i = 0; i < totalPairs; i++) {
        char tmpWord[20], tmpLetter;
        cin >> tmpLetter >> tmpWord;
        letters[i] = tmpLetter;
        strcpy(words[i], tmpWord);
    }

    countChars(words, letters, counts);

    return 0;
}
