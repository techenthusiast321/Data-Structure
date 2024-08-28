#include<iostream>
using namespace std;
//Run time polymorphism(Dynamic)
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog:public animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main(){
    animal a;
    a.speak();
    Dog d;
    d.speak();
    return 0;
}