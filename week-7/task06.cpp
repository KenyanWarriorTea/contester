#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void mostRecent(char *text) {
    vector<string> data;
    
    char *pch = strtok(text, " #?,.<>;:-+_=!@#$^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    while(pch != NULL) {
        string word = pch;
        while(word.length() < 200) word = "0" + word;
        data.push_back(word);
        pch = strtok(NULL, " #?,.<>;:-+_=!@#$^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    }

    string maxStr = "";
    for(size_t i = 0; i < data.size(); i++) {
        if(data[i] > maxStr) maxStr = data[i];
    }

    string str = "";
    for(size_t i = 0; i < maxStr.size(); i++) {
        if(maxStr[i] != '0') str += maxStr[i];
    }

    size_t i = 0;
    size_t size = str.size();
    if(size % 3 == 1) { cout << str[i] << " "; i++; }
    else if(size % 3 == 2) { cout << str[i] << str[i+1] << " "; i += 2; }

    for(size_t n = i; n < size; n += 3)
        cout << str[n] << str[n+1] << str[n+2] << " ";
}

int main() {
    char text[1000];
    cin.getline(text, 1000);

    for(int i = 0; text[i]; i++)
        text[i] = toupper(text[i]);

    mostRecent(text);

    return 0;
}
