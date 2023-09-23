#include <iostream>
using namespace std;

inline void func()
{
    cout<<"This is inline function \n";
}
class sample
{
    private:
    int a=10;
    public:
    void show()
    {
        func();
    }
    friend void display();
};
void display()
{
    sample s;
    cout<<"value of a is "<<s.a<<endl;
}

int main()
{
    sample s;
    s.show();
    display();
    return 0;
}