#include <iostream>
using namespace std;
// kế thừa công khai làm cho public các members của lớp cs public trong lớp dẫn 
// xuất & các protected members của lớp cs vẫn protected ở trong lớp dẫn xuất.
class Base {
    private: int riengtu = 1;
    protected: int dcbaove = 2;
    public: int congkhai = 3;
    int GetPrivate() {
        return riengtu;
    }
};
class PublicDerived : public Base {
    public:
    int GetProtected() {
        return dcbaove;
    }
};
int main() {
    PublicDerived object1;
    cout << "Private = " << object1.GetPrivate() << endl;
    cout << "Protected = " << object1.GetProtected() << endl;
    cout << "Public = " << object1.congkhai << endl;
    return 0;
}