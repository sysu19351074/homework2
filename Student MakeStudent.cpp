#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    Student(int number_, string school_) :number(number_), school(school_) { cout << "constructor" << endl; };      
    ~Student() { cout << "distructor" << endl; };
    int number;
    char name[32] = {"/0"};
    string school;
};
int main()
{
    Student stu(0, "/0");
    int number;
    char name[32];
    string school;
    cout << "������ѧ�ţ�";
    cin >> number;
    cout << "������������";
    cin >> name;
    cout << "������ѧУ���ƣ�";
    cin >> school;
    Student MakeStudent(int number, const char* name, string school);
    stu = MakeStudent(number, name, school);
    cout << "ѧ�ţ�" << number << endl;
    cout << "������" << name << endl;
    cout << "ѧУ���ƣ�" << school << endl;
    return 0;
}
Student MakeStudent(int number, const char* name, string school)
{
    Student stu(0,"0");
    stu.number = number;
    strcpy_s(stu.name,name);
    stu.school = school;
    return(stu);
}

