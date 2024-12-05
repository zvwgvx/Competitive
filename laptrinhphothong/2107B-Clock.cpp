#include <iostream>
#define RUNLR for(int i = left; i <= right; ++i)
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
long long int hour_1, minuet_1, hour_2, minuet_2, bell_ring;
int main(){
    faster;
    cin >> hour_1 >> minuet_1 >> hour_2 >> minuet_2;
    long long int left = hour_1 * 60 + minuet_1, right = hour_2 * 60 + minuet_2;
    RUNLR {
        int hour = i / 60, minuet = i % 60;
        if(minuet == 30) ++bell_ring;
        if(minuet == 0) {
            hour %= 12;
            if(hour == 0) hour = 12;
            bell_ring += hour; 
        }
    }
    cout << bell_ring;
}