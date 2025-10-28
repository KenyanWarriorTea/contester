#include <iostream>
#include <cstring>
#include <vector>
#include <string>

using namespace std;

void mostRecent(char* text) {
    vector<string> words;
    char* pch = strtok(text, " ");
    
    while(pch != NULL) {
        words.push_back(string(pch));
        pch = strtok(NULL, " ");
    }

    vector<string> uniqueWords;
    for(size_t i = 0; i < words.size(); i++) {
        bool found = false;
        for(size_t j = 0; j < i; j++) {
            if(words[i] == words[j]) {
                found = true;
                break;
            }
        }
        if(!found) uniqueWords.push_back(words[i]);
    }

    string result;
    for(size_t i = 0; i < uniqueWords.size(); i++) {
        result += uniqueWords[i];
        if(i != uniqueWords.size() - 1) result += " ";
    }

    cout << result;
}

int main() {
    char text[1000];
    cin.getline(text, 1000);

    mostRecent(text);

    return 0;
}
