//https://drive.google.com/file/d/1IUKOZsNEkDFv6d2jasxsz2obdzLugHqJ/view
#include <iostream>
#define RUN(i, begin, end) for(int i = begin; i <= end; ++i)
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
long long int hour_1, minuet_1, hour_2, minuet_2, bell_rings;

int main(){
    faster;
    cin >> hour_1 >> minuet_1 >> hour_2 >> minuet_2;
    long long int left = hour_1 * 60 + minuet_1, right = hour_2 * 60 + minuet_2;

    RUN(i, left, right){
        int hours = i / 60, minuets = i % 60;
        if(minuets == 30) ++bell_rings; // vào các thời điểm 1h30, 2h30,..., đồng hồ cũng đánh một tiếng chuông
        if(minuets == 0) { 
            hours %= 12;
            if(hours == 0) {
                hours = 12;
            }
            bell_rings += hours; //đánh n tiếng chuông lúc n giờ,
        }
    }
    
    cout << bell_rings;
}