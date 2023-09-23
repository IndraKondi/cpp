#include<iostream>
using namespace std;

class student
{
    public:
    int a = 10;
    static int b;
};
int student::b = 10;
int main()
{
    student x, y;
    x.b = 20;
    cout<< x.a << " " << x.b << endl;
    y.b = 30;
    cout<< y.a << " " << y.b;
    return 0;
}