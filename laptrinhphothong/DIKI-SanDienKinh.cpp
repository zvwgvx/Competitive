//http://ntucoder.net/Problem/Details/135
#include <iostream>
#define RUN(i, a, b) for(int i = a; i <= b; ++i) 
using namespace std;
long int paint_lines, runing_distance, paintline_distances[100001];

void CIN() {
	cin >> paint_lines >> runing_distance;
	RUN(i, 1, paint_lines) cin >> paintline_distances[i];
}

void Check2PaintLines() {
	int i = 1,j = 0,kq = 0;
	while (i < paint_lines) { 
		if (paintline_distances[i] - paintline_distances[j] < runing_distance) ++i; // ai - aj < m thì phải tăng ai sao cho bằng
		if (paintline_distances[i] - paintline_distances[j] > runing_distance) ++j; // ai - aj > m thì phải giảm aj sao cho bằng
		if (paintline_distances[i] - paintline_distances[j] == runing_distance) { // yêu cầu bài toán 
			cout << paintline_distances[j] << " " << paintline_distances[i];
			kq = 1;
			break;
		}
	}
	if (kq == 0) cout << -1; // ko có kq thì in ra -1
}

int main() {
	CIN();
	Check2PaintLines();
	return 0;
}