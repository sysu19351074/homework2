#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    Student() { cout << "constructor1" << endl; };                                                       //构造函数1
    Student(int id_, string school_) :id(id_), school(school_) { cout << "constructor2" << endl; };      //构造函数2
    ~Student() { cout << "distructor" << endl; };
    Student(const Student& student) {
        id = student.id;
        school = student.school;
        cout << "copy constructor" << endl;
    }
    void getinfo();
    void printinfo();
private:
    int id;
    string school;
};
void Student::getinfo()
{
    cout << "请输入学号：";
    cin >> id;
    cout << "请输入学校名称：";
    cin >> school;
}
void Student::printinfo()
{
    cout << "学号：" << id << endl;
    cout << "学校名称：" << school << endl;
}
int main()
{
    Student stu1;
    Student stu2(0, "/0");
    stu1.getinfo();
    stu2.getinfo();
    Student stu3 = stu2;
    stu1.printinfo();
    stu2.printinfo();
    stu3.printinfo();
    return 0;
}