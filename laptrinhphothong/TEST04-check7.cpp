#include <iostream>
using namespace std;
bool check7(size_t n) {
    while (n){ //biểu thức trong while || if được chuyển thành bool và kq đc dùng để đưa ra quyết định.
        if (n % 10 == 7) return true;
        else n /= 10;
    } 
    return false;
}
int main() {
    size_t n;
    cin>>n;
    while (cin >> n){
        if (check7(n)) cout << n << " ";
    }
    cout << endl;
    return 0;
}