#include<iostream>
using namespace std;

class Hero{
    private:
       int age;
       int name;
       string gender;
    public:
    void print(){
        cout<<"hi"<<endl;
    }

};

int main(){
    Hero a;
    a.print();
    cout<<"Sab theek chalra h"<<endl;
    return 0;
}