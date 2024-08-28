#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int color;
    int height;
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog:public Animal{

};
class GoldenRetriever:public Dog{

};
int main(){
    GoldenRetriever g;
    cout<<g.age<<endl;
    g.speak();
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}