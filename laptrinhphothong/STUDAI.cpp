#include <iostream>
#include <string.h>
#define RUNSTRING for (i = 0; i < strlen(s); ++i)
#define RUNSNM for (int i = n; i <= m; ++i)
using namespace std;
int main() {
    int i, j, n, m, dem, max = 0;
    char s[1000];
    gets(s);
    RUNSTRING {
        if (s[i] != ' ') {
            dem = 1;
            j = i + 1;
        }
        while (s[j] != ' ' && j < strlen(s)) {
            ++dem;
            if (dem > max) {
                max = dem;
                n = i;
                m = j;
            }
            ++j;
        }
    }
    RUNSNM cout << s[i] ;
}
