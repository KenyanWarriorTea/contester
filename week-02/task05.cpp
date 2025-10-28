#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Проверяем, что размер массива допустим
    if (n < 1 || n > 1000)
        return 0;

    int arr[1000];
    
    // Ввод элементов массива
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Инициализация максимума минимально возможным значением
    int maxValue = -2147483648;
    int countMax = 0;

    // Поиск максимального значения
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    // Подсчёт количества элементов, равных максимуму
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxValue) {
            countMax++;
        }
    }

    cout << countMax;

    return 0;
}

