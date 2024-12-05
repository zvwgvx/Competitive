#include <iostream>
using namespace std;
//kế thừa riêng làm cho public và protected các members của lớp cs private
//trong lớp dẫn xuất.
class Base {
    private: int riengtu = 1;
    protected: int dcbaove = 2;
    public: int congkhai = 3;
    int GetPrivate() {
        return riengtu;
    }
};
class PrivateDerived : private Base {
    public:
    int GetProtected() {
        return dcbaove;
    }
    int GetPublic() {
        return congkhai;
    }
};
int main() {
    PrivateDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.GetProtected() << endl;
    cout << "Public = " << object1.GetPublic() << endl;
    return 0;
}