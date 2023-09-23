#include<iostream>
using namespace std;

class rectangle
{
    int x=10, y=20;
    public:
    rectangle()
    {
        cout<<"This is default constructor"<<endl;
        /*cout<<"Enter length: ";
        cin>>x;
        cout<<"Enter bradth: ";
        cin>>y;*/
        this->x=x;
        this->y=y;
        cout<<"Area is: "<<x*y<<endl;
    }
    rectangle(int l, int b)
    {
        cout<<"This is parameterized constructor"<<endl;
        this->x=l;
        this->y=b;
        cout<<"Area is: "<<l*b<<endl;
    }
    rectangle(rectangle& t)
    {
        cout<<"This is copy constructor"<<endl;
        this->x=t.x;
        this->y=t.y;
        cout<<"Area is: "<<(x*y)<<endl;
    }
    ~rectangle()
    {
        cout<<"This is destructor"<<endl;
    }
};

int main()
{
    int length, breadth;
    rectangle rect;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    rectangle rect1(length,breadth);
    rectangle rect2(rect1);
    return 0;
}