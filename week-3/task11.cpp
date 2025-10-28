#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char input[32];
    cin >> input;

    if (strcmp(input, "Tom") == 0) cout << "555-3322";
    else if (strcmp(input, "Mary") == 0) cout << "555-8976";
    else if (strcmp(input, "Jon") == 0) cout << "555-1037";
    else if (strcmp(input, "Rachel") == 0) cout << "555-1400";
    else if (strcmp(input, "Sherry") == 0) cout << "555-8873";
    else cout << "Not found";

    return 0;
}
