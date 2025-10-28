#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double nums[10], total = 0.0;

    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
        total += pow(nums[i], i + 1);
    }

    cout << fixed << total;

    return 0;
}
