#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string morse[36] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                        "..-", "...-", ".--", "-..-", "-.--", "--..",
                        "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

    string str, strMorse = "";
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for (char c : str) {
        if (c >= '0' && c <= '9') {
            strMorse += morse[c - '0'];
            strMorse += ' ';
        } else if (c >= 'a' && c <= 'z') {
            strMorse += morse[c - 'a'];
            strMorse += ' ';
        } else if (c == ' ') {
            strMorse += "   ";
        }
    }

    cout << strMorse << endl;

    return 0;
}
