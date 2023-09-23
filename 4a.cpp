#include<iostream>
using namespace std;

class parent{
    public:
    void display(){
        cout << "this is parent class"<<endl;
    }
};

class child: public parent{
    public:
    void display1(){
        cout << "this is child class";
    }
};
int main(){
    parent obj1, *p1;
    child obj2, *p2;
    p1 = &obj1;
    p2 = &obj2;
    p1->display();
    p2->display();
    p2->display1();
    return 0;
}