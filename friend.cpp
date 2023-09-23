#include <iostream>
using namespace std;

class sample
{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    // sample()
    // {
    //     this->a = a;
    //     this->b = b;
    //     cout<<"a = "<<a<<"b = "<<b<<endl;
    // }
    friend void display(/*sample &s*/);
};
void display(/*sample &s*/)
{
    sample s;
    cout << s.a << endl;
    cout << s.b << endl;

}
int main()
{
    // sample obj;
    // display(obj);
    display();
}