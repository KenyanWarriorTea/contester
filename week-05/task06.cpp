#include <iostream>
using namespace std;

char arr[6][6];
int sizeN, sizeM;
bool pathFound = false;

void dfs(int x, int y) {
    if (x < 0 || y < 0 || x >= sizeN || y >= sizeM) return; // вышли за границы
    if (arr[x][y] != '.') return; // препятствие или уже посещено

    if (x == sizeN - 1 && y == sizeM - 1) { // достигли цели
        pathFound = true;
        return;
    }

    arr[x][y] = '#'; // отмечаем посещённую клетку

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main() {
    cin >> sizeN >> sizeM;

    for (int i = 0; i < sizeN; i++)
        for (int j = 0; j < sizeM; j++)
            cin >> arr[i][j];

    dfs(0, 0);

    cout << (pathFound ? "YES" : "NO");

    return 0;
}
