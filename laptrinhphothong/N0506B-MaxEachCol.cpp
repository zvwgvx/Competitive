#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int a[m][n];
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			cin >> a[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		int maxm = a[0][i];
		for (int j = 0; j < m; j++)
		{
			if (a[j][i] > maxm)
				maxm = a[j][i];
		}
		cout << maxm << endl;
	}
	return 0;
}