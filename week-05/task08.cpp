#include <iostream>
using namespace std;

char arr[10][10];
int size;

int dfs(int x, int y) {
    if (x < 0 || y < 0 || x >= size || y >= size) return 0;
    if (arr[x][y] != '.') return 0;

    arr[x][y] = '*';
    int count = 1;
    count += dfs(x + 1, y);
    count += dfs(x - 1, y);
    count += dfs(x, y + 1);
    count += dfs(x, y - 1);
    return count;
}

int main() {
    int a, b;
    cin >> size;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> arr[i][j];
    cin >> a >> b;
    arr[a - 1][b - 1] = '.';
    cout << dfs(a - 1, b - 1);
    return 0;
}
