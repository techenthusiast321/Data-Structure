#include<iostream>
using namespace std;
//Compile time polymorphism(Static)
class A{
    public:
    void sum(){
        cout<<"Hey"<<endl;
    }
    void sum(int a,int b){
        cout<<a+b<<endl;
    }
    int sum(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};
int main(){
    A a;
    a.sum();
    a.sum(3,5);
    a.sum(2,4,6);
    return 0;
}