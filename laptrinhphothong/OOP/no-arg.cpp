#include <iostream>
using namespace std;
class Begin{
public :
    string name;
    Begin(){} // hàm no-arg để in ra Hello World
    Begin(string name){
        this->name = name;
    }
};
int main(){
    Begin begin;
    cout<<"Hello World";
}