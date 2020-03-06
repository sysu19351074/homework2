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
    int number;                                          //���֤��
    char name[32] = { "0" };                             //����
};
Identity::Identity(const Identity& identity)
{
    number = identity.number;
    strcpy_s(name, identity.name);
    cout << "copy constructor" << endl;
}
void Identity::get_Identity()
{
    cout << "���������֤�ţ�";
    cin >> number;
    cout << "������������";
    cin >> name;
}
void Identity::print_Identity()
{
    cout << "���֤�ţ�" << number << endl;
    cout << "������" << name << endl;
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