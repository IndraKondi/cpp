#include<iostream>
using namespace std;

class parent
{
    public:
    virtual void display()
    {
        cout<<"this is a parent class \n";
    }
};
class child: public parent
{
    public:
    void display()
    {
        cout<<"this is a child class \n";
    }
};

int main()
{
    child c;
    c.display();
    parent *obj, p;
    obj=&c;
    p.display();
    obj->display();
}