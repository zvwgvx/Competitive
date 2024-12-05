#include<iostream>
using namespace std;
int main() {
	int hang, cot,i,j,dem = 0; 
	cin >> hang >> cot;
	int a[hang][cot];
	for(i = 0; i < hang; i++)	{
		for(j = 0; j < cot; j++)  cin >> a[i][j];
	}
	for(i = 0; i < hang; i++) {
  		for(j = 0; j < cot; j++){
  			if(a[i][j] == 0) dem++;
		}
  	}
 	if(dem > ((i * j)/2)) cout<<"YES";
	else cout<<"NO";
 	return 0;
}
