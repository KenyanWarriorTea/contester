#include <iostream>
#include <string>
using namespace std;

int leap_years(int y) {
    y--;
    return y/4 - y/100 + y/400;
}

int month_to_days(int m, int y) {
    int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 0;
    for(int i = 0; i < m; i++) days += month_days[i];
    if(m > 1 && (y%4==0 && y%100!=0 || y%400==0)) days++; 
    return days;
}

int main() {
    string Date;
    getline(cin, Date);

    int day = stoi(Date.substr(0,2));
    int month = stoi(Date.substr(2,2));
    int year = stoi(Date.substr(4,4));

    int total_days = (year-1)*365 + leap_years(year) + month_to_days(month-1, year) + day;

    cout << total_days << endl;
    return 0;
}
