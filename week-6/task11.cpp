#include <iostream>

using namespace std;

int validateIP(int* nums, int status) {
    for(int i = 0; i < 4; i++)
        if(nums[i] < 0 || nums[i] > 255) status = 0;
    return status;
}

int main() {
    int parts[4];
    char sep;
    int valid = 1;

    for(int i = 0; i < 4; i++) {
        cin >> parts[i];
        if(i < 3) {
            cin >> sep;
            if(sep != '.') valid = 0;
        }
    }

    valid = validateIP(parts, valid);

    cout << valid;

    return 0;
}
