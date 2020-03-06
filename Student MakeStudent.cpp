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
    cout << "请输入学号：";
    cin >> number;
    cout << "请输入姓名：";
    cin >> name;
    cout << "请输入学校名称：";
    cin >> school;
    Student MakeStudent(int number, const char* name, string school);
    stu = MakeStudent(number, name, school);
    cout << "学号：" << number << endl;
    cout << "姓名：" << name << endl;
    cout << "学校名称：" << school << endl;
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

