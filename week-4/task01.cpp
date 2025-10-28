#include <iostream>
#include <algorithm>

using namespace std;

int findMinimum(int w, int x, int y, int z) {
    int nums[4] = {w, x, y, z};
    return *min_element(nums, nums + 4);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << findMinimum(a, b, c, d);
    return 0;
}
