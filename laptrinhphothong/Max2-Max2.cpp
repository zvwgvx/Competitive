#include <iostream>
#define RUN for(long long int i = 0; i < n; i++)
using namespace std;
int main(){
    long long int a[102], n, max = 0, max2 = 0;
    cin >> n;
    RUN cin >> a[i];
    RUN { 
        if(max < a[i]) max = a[i];    
    }
    RUN {
        if(max == a[i]) continue;
        else if(max2 < a[i]) max2 = a[i];
    }
    cout << max2;
    return 0;
}