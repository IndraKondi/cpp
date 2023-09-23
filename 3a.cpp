#include<iostream>
using namespace std;

class college
{
    public:
    string cname;
    void c(string cname)
    {
        cout<<"College: "<<cname<<endl;
    }
};
class branch: public college
{
    public:
    string bname;
    void b(string bname)
    {
        cout<<"Branch: "<<bname<<endl;
    }
};
class student1: public branch
{
    public:
    void s1(string stuname)
    {
        cout<<"Student: "<<stuname<<endl;
    }
};
class rollno
{
    public:
    void rno(int rollno)
    {
        cout<<"Rollno: "<<rollno<<endl;
    }
};
class section: public rollno
{
    public:
    void sect(int section)
    {
        cout<<"Section: "<<section<<endl;
    }
};
class year: public rollno
{
    public:
    void y(int year)
    {
        cout<<"year: "<<year<<endl;
    }
};
class semester
{
    public:
    void sem(int semester)
    {
        cout<<"Semester: "<<semester<<endl;
    }
};
class student2:public year, public semester
{
    public:
    string sname;
    void s2(string sname)
    {
        cout<<"Student: "<<sname<<endl;
    }
};

int main()
{
    cout<<"Single Inheritance"<<endl;
    branch b1;
    b1.c("GVPCE");
    b1.b("CSE");  
    cout<<endl<<"Multilevel Inheritance"<<endl;
    student1 stud;
    stud.s1("Santhosh");
    stud.b("CSE");
    stud.c("ANITS");
    cout<<endl<<"Multiple Inheritance"<<endl;
    student2 stu;
    stu.s2("Indra");
    stu.y(2);
    stu.sem(4);
    cout<<endl<<"Hierarichiral Inheritance"<<endl;
    section sec;
    sec.rno(73);
    sec.sect(2);
    year y1;
    y1.rno(73);
    y1.y(2);
    return 0;
}