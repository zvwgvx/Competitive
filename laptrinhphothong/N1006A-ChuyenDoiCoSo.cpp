#include <iostream>
#include <cstring>
#define RUNS for (int i = strlen(s) - 1; i >= 0; i--)
using namespace std;
void chuyenDoiCoSo(char s[], int hecoso) {
	int coSo = 0, soDu = 0, i = 0;
	cin >> coSo;
	while (hecoso > 0) {
		soDu = hecoso % coSo;
		if (soDu < 10) s[i] = '0' + soDu; //‘0’ + số nào đó = kí tự của số đó như ‘0’ + 1 = ‘1’
		else {
			s[i] = 'A' + (soDu - 10); // ‘A’ + số 1 nào đó = kí tự kế tiếp như ‘A’ + 1 = ‘B’
		}
		i++;
		hecoso /= coSo;
	}
        s[i] = '\0'; // '\0' là tự kết thúc chuỗi 
	RUNS cout << s[i];
}
int main(int argc, char const *argv[]) {
	int hecoso;
	char s[100];
	cin >> hecoso;
	chuyenDoiCoSo(s, hecoso);
	return 0;
}