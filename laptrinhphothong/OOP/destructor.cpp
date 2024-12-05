#include <iostream>
using namespace std;
class A{ // hàm huỷ 
public :
    int *arr, n;
    ~A(){
        cout<<"Hello World"<<endl;
        delete[] arr;
    }
};
void SomeFunc1(){
    A a;
    a.n = 3;
    a.arr = new int[a.n];
}
void SomeFunc2(){
    A a;
    a.n = 3;
    a.arr = new int[a.n];
}
int main(){
    SomeFunc1();
    SomeFunc2();
}