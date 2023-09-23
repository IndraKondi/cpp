#include<iostream>
using namespace std;

class rectangle
{
    int x, y;
    public:
    void area(int l, int b)
    {
        this->x=l;
        this->y=b;
        cout<<"area of rectangle is: "<<l*b;
    }
};
 
int main()
{
    int l, b;
    rectangle rect;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    rect.area(l,b);
    return 0;
}