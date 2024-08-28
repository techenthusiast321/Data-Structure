#include<iostream>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"Inside function1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside function2"<<endl;
    }
};
class C:public A{
    public:
    void func3(){
        cout<<"Inside function3"<<endl;
    }
};

int main(){
    A object1;
    object1.func1();

    cout<<endl;
    B b;
    b.func1();
    b.func2();
    C c;
    cout<<endl;
    c.func1();
    c.func3();
    return 0;
}