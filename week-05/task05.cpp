#include <iostream>
#include <vector>
using namespace std;

void generate(vector<int>& comb, int pos, int maxX, int maxY, vector<vector<int>>& result) {
    if (pos == maxX) {
        result.push_back(comb);
        return;
    }
    for (int i = 1; i <= maxY; i++) {
        comb[pos] = i;
        generate(comb, pos + 1, maxX, maxY, result);
    }
}

int main() {
    int maxX, maxY;
    cin >> maxX >> maxY;

    int lines = 1;
    for (int i = 0; i < maxX; i++) lines *= maxY;

    vector<vector<int>> arr;
    arr.reserve(lines);

    vector<int> comb(maxX);
    generate(comb, 0, maxX, maxY, arr);

    for (auto &v : arr) {
        for (int num : v) cout << num << " ";
        cout << endl;
    }

    return 0;
}
