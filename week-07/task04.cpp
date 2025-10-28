#include <iostream>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;

void mostFrequentWord(char* text) {
    stringstream ss(text);
    string word;
    map<string, int> freq;

    while(ss >> word) {
        // Убираем нежелательные символы
        word.erase(remove_if(word.begin(), word.end(), [](char c){
            return !isalpha(c);
        }), word.end());

        if(!word.empty()) {
            freq[word]++;
        }
    }

    string maxWord;
    int maxCount = 0;

    for(auto &p : freq) {
        if(p.second > maxCount) {
            maxCount = p.second;
            maxWord = p.first;
        }
    }

    cout << maxWord << endl;
}

int main() {
    char text[1000];
    cin.getline(text, 1000);

    for(int i = 0; text[i]; i++)
        text[i] = toupper(text[i]);

    mostFrequentWord(text);

    return 0;
}
