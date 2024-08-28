#include<iostream>
using namespace std;

class human{
   
       
    public:
    int weight;
    int height;
    
    int age;

    public:
    int getAge(){
        return age;
    }
   
    void setWeight(int w){
        this->weight=w;
    }
};

class Male:public human{
    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }
    int getHeight(){
        return height;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.getHeight()<<endl;

    cout<<object1.color<<endl;
    object1.sleep();
    object1.setWeight(80);
    cout<<object1.weight<<endl;

    return 0;
}