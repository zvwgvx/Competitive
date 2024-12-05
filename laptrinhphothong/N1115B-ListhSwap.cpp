//http://laptrinhphothong.vn/Problem/Details/5740
#include <iostream>
#define RUN(i, begin, end) for (int i = begin; i <= end; ++i)
using namespace std;
int n, check[20] = { 0 }, a[20]; //Đánh dấu chưa có phần tử nào sử dụng hết

void COUT() {
    RUN(i, 1, n) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void ListHoanVi(int k) {
    RUN(i, 1, n) {
        if (!check[i]) {  //Kiểm tra nếu phần tử chưa được chọn thì sẽ đánh dấu
            a[k] = i;  // Lưu một phần tử vào hoán vị
            check[i] = 1; //Đánh dấu đã dùng
            if (k == n) COUT();  //Kiểm tra nếu đã chứa một hoán vị thì xuất
            else {
                ListHoanVi(k + 1);
            }
            check[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    ListHoanVi(1);
}
    
