#include <iostream>
using namespace std;
class A{
public :
    int *arr,n;
    ~A(){ // phương thức ~A() đc gọi , có nghĩa là bộ nhớ đang đc cấp phát tự động đã đc giải phóng tự động 
        cout<<"Destructor Called";  
        delete[] arr;
    }
    // phương thức huỷ của 1 đối tượng đc gọi trong 4th sau :
    // 1 : sau khi thực hiện hàm chứa đối tượng 
    // 2 : khi code end
    // 3 : khi toán tử xoá đang đc gọi 
    // 4 : khi thoát khỏi khối mã có chứa đối tượng 
};
int main(){
    cout<<"Before Block"<<endl;{
        A a;
    }
    cout<<"After Block"<<endl;
}