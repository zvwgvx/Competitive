#include <iostream>
using namespace std;
class HS{ //  HS là 1 lớp để biểu diễn thông tin về học sinh
    public : 
    string name; // thuộc tính lưu tên của học sinh
    int age; // thuộc tính lưu tuổi của học sinh
    void CIN(){ // phương thức để nhập info của đối tượng trên màn hình
        cin>>name>>age;
    }
    void COUT(){ // phương thức để xuất info của đối tượng trên màn hình
        cout<<"NAME : "<<name<<endl;
        cout<<"AGE :"<<age<<endl;
    }
};
int main(){
    HS hs; //  hs là đối tượng đc biểu diễn info về học sinh
    // dấu "." dùng để truy cập các thuộc tính và phương thức của một đối tượng
    hs.CIN(); 
    hs.COUT();
}
