#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    const int minVal = -1000;
    const int maxVal = 1000;
    int n;

    cin >> n;
    int arr[100];  // фиксированный размер вместо VLA для надёжности
    int count = 0;

    // ввод с проверкой диапазона
    while (count < n) {
        int val;
        cin >> val;
        if (val < minVal || val > maxVal) continue;
        arr[count++] = val;
    }

    // сортировка по убыванию
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[j] > arr[i]) swap(arr[i], arr[j]);
        }
    }

    cout << arr[0];
    return 0;
}
