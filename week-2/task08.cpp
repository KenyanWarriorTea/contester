#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;

    cin >> size;
    int x[1000]; // безопасно фиксируем размер

    if (size >= 1 && size <= 1000) {

        for (int i = 0; i < size; i++)
            cin >> x[i];

        // Сортировка по возрастанию (через стандартный алгоритм)
        sort(x, x + size);

        for (int i = 0; i < size; i++)
            cout << x[i] << " ";
    }

    return 0;
}
