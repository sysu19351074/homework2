#include<iostream>
#include<string>
using namespace std;
class Student {
public:
    Student() { cout << "constructor1" << endl; };                                                       //���캯��1
    Student(int id_, string school_) :id(id_), school(school_) { cout << "constructor2" << endl; };      //���캯��2
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
    cout << "������ѧ�ţ�";
    cin >> id;
    cout << "������ѧУ���ƣ�";
    cin >> school;
}
void Student::printinfo()
{
    cout << "ѧ�ţ�" << id << endl;
    cout << "ѧУ���ƣ�" << school << endl;
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