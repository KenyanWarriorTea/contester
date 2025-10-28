#include <map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> wordCount;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        wordCount[s]++;
    }

    int maxCount = 0;
    string ans;

    for (const auto& [word, count] : wordCount) {
        if (count > maxCount) {
            maxCount = count;
            ans = word;
        }
    }

    cout << ans << endl;
    return 0;
}
