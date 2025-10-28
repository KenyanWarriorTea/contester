#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int total, step;
    cin >> total >> step;

    int arr[total];
    for(int i = 0; i < total; i++)
        arr[i] = i + 1;

    int index = step - 1;

    if(step == 1) {
        cout << total;
    } else if(total == 2) {
        cout << ((step % 2 == 0) ? 1 : 2);
    } else {
        while(arr[1] < 21474) {
            int removed = 0;
            for(int i = index; i < total; i += step) {
                arr[i] = 21474;
                removed++;
            }

            index = (index + step - total) % total;
            sort(arr, arr + total);
            total -= removed;
        }
        cout << arr[0];
    }

    return 0;
}
