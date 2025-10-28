#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double values[100], roots[100];
    int count = 0;

    while (true) {
        double input;
        cin >> input;

        if (input == 0) break;        
        if (input < 0) continue;      

        roots[count++] = sqrt(input); 
    }

    cout << count << endl;

    for (int i = count - 1; i >= 0; i--) {
        cout << roots[i] << endl;
    }

    return 0;
}
