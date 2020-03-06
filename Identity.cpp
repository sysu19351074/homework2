#include<iostream>
#include<string>
using namespace std;
class Identity {
public:
    Identity(int number_) :number(number_)
    {
        cout << "constructor" << endl;
    };
    ~Identity() { cout << "distructor" << endl; };
    Identity(const Identity& identity);
    void get_Identity();
    void print_Identity();

private:
    int number;                                          //身份证号
    char name[32] = { "0" };                             //姓名
};
Identity::Identity(const Identity& identity)
{
    number = identity.number;
    strcpy_s(name, identity.name);
    cout << "copy constructor" << endl;
}
void Identity::get_Identity()
{
    cout << "请输入身份证号：";
    cin >> number;
    cout << "请输入姓名：";
    cin >> name;
}
void Identity::print_Identity()
{
    cout << "身份证号：" << number << endl;
    cout << "姓名：" << name << endl;
}
int main()
{
    Identity p1(0);
    p1.get_Identity();
    Identity p2 = p1;
    p1.print_Identity();
    p2.print_Identity();
    return 0;
}