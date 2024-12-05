#include <iostream>
#define ile i % 2 != 0
#define RUNMONTH for (int i = 3; i < month; i++)
using namespace std;
int main () {
    int day, month, year, x = 0;
    cin >> day >> month >> year;
    if (month == 1) cout << day - 25 + 1;
    else {
        if (month == 2) cout << 31 - 25 + day + 1;
        else {
            RUNMONTH {
                if (ile) x += 31;
                else x += 30;
            }
            cout << x + 30 + 31 - 25 + day;
        }
    }
}
    