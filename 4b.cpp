#include<iostream>
using namespace std;

//function overloading
class funcoverld
{
    public:
    int mul(int x, int y)
    {
        cout<<"function with two parameter"<<endl;
        return x*y;
    }
    int mul(int x, int y, int z)
    {
        cout<<"function with three parameters"<<endl;
        return x*y*z;
    }
};

//operator overloading
class unary
{
    private:
    int a,b;
    public:
    unary(int x, int y)
    {
        this->a=x;
        this->b=y;
        cout<<"a: "<<a<<"\tb: "<<b<<endl;
    }
    unary operator++()
    {
        a++;
        b++;
    }
    void display()
    {
        cout<<"a: "<<a<<"\tb: "<<b<<endl;
    }
};

//function overriding
class parent
{
    public:
    void display()
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
    int n1,n2,n3;
    funcoverld fo;
    cout<<"enter n1: ";
    cin>>n1;
    cout<<"enter n2: ";
    cin>>n2;
    cout<<"enter n3: ";
    cin>>n3;
    cout<<"\nFunction Overloading:\n";
    cout<<"product of two numbers: "<<fo.mul(n1,n2)<<endl;
    cout<<"product of three numbers: "<<fo.mul(n1,n2,n3)<<endl;
    cout<<"\nOperator Overloading\n";
    unary u1(2,3);
    ++u1;
    u1.display();
    cout<<"\nFunction Overriding:\n";
    child c;
    c.display();
    parent obj=child();
    obj.display();
    return 0;
}