#include <iostream>
using namespace std;
class HS{
private:
    string name;
    int age;
public:
    void CIN(){
        cin>>name>>age;
    }
    void COUT(){
        cout<<name<<endl<<age<<endl;
    }
};
int main(){
    HS hs;
    hs.CIN();
    hs.COUT();
}