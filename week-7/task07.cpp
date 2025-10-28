#include <iostream>
#include <cstring>

using namespace std;

void mostRecent(char *str1, char *str2, char *str3) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int size3 = strlen(str3);

    char *res;

    if(size1 > size2 && size1 > size3) res = str1;
    else if(size2 > size1 && size2 > size3) res = str2;
    else if(size3 > size1 && size3 > size2) res = str3;
    else { 
        res = str1;
        if(strlen(str2) == strlen(res) && strcmp(str2, res) > 0) res = str2;
        if(strlen(str3) == strlen(res) && strcmp(str3, res) > 0) res = str3;
    }
  
    cout << res;
}

int main() {
    char str1[100], str2[100], str3[100];

    cin >> str1 >> str2 >> str3;

    mostRecent(str1, str2, str3);

    return 0;
}
