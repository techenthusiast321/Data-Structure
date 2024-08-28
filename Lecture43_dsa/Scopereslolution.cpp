#include<iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"Inside function A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"Inside function B"<<endl;
    }
};
class C:public B,public A{

};
int main(){
     C obj;
    //  obj.fun();
    obj.A::fun();
    obj.B::fun();
    return 0;
}