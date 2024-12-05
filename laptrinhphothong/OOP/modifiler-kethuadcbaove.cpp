#include <iostream>
using namespace std;
// kế thừa được bảo vệ làm cho public & protected các member của lớp cs 
// protected trong lớp dẫn xuất.
class Base {
    private: int riengtu = 1;
    protected: int dcbaove = 2;
    public: int congkhai = 3;
    int GetPrivate() {
        return riengtu;
    }
};
class ProtectedDerived : protected Base {
    public:
    int GetProtected() {
        return dcbaove;
    }
    int GetPublic() {
        return congkhai;
    }
};
int main() {
    ProtectedDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.GetProtected() << endl;
    cout << "Public = " << object1.GetPublic() << endl;
    return 0;
}