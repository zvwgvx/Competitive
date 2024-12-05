#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;           // nếu tên của tham số đầu vào khớp với tên thuộc tính của lớp, 
        this->age = age;            // bạn có thể truy cập thuộc tính của lớp = từ khóa this & toán tử ->                          
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // 2 chuỗi đã đc chuyển cho hàm Student
    Student s1("Toan", 16); 
    Student s2("Hy", 28);
    s1.display();
    s2.display();
    return 0;
}