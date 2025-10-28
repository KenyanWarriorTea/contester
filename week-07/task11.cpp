#include <iostream>

using namespace std;

int func(int sizeN, int sizeM) {
    bool startWithX = (sizeN % 2 == 0);

    for(int i = 0; i < sizeN; i++) {
        for(int j = 0; j < sizeM; j++) {
            if(startWithX)
                cout << ((i + j) % 2 == 0 ? "X" : ".");
            else
                cout << ((i + j) % 2 == 0 ? "." : "X");
        }
        cout << endl;
    }

    return 0;
}

int main() {
    int sizeN, sizeM;

    cin >> sizeN >> sizeM;

    func(sizeN, sizeM);

    return 0;
}
