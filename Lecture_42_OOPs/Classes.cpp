#include<iostream>
#include<string.h>
using namespace std;
class Hero{

    //properties
    private:
    int health;
    public:
    char *name;
    static int timeToComplete;
    //Default constructor
    Hero(){
        name=new char[100];
        cout<<"Constructor called"<<endl;
    }
    

    //Parametrised constructor
    Hero(int health){
        // cout<<"Address of object is:"<<this<<endl;
        this->health=health;
    }

    //Copy constructor
    Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"Copy constructor called;"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    // char name[100];
    char level;

    void print(){
        cout<<endl;
        cout<<"Name :"<<this->name<<endl;
        cout<<"Level :"<<this->level<<endl;
        cout<<"Health :"<<this->health<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    int setHealth(int x){
        health=x;
    }
    char setLevel(char ch){
        level=ch;
    }

    void setName(char name[]){
        this->name=name;
    }

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
    static int random(){
        return timeToComplete;
    }

};
int Hero::timeToComplete=5;
int main(){

    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    Hero a;
    cout<<a.timeToComplete<<endl;
    Hero b;
    b.timeToComplete=10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;
    cout<<endl;
    cout<<Hero::random()<<endl;
    // Hero a;
    // Hero *b=new Hero();
    // delete b;
    // Hero l;
    // Hero h(10);
    // // h.print();
    // cout<<h.getHealth()<<endl;
    // // cout<<"Address of h is:"<<&h<<endl;
    
    // cout<<endl;
    // Hero *b=new Hero(100,'A');
    // b->print();
    // cout<<b->getHealth()<<endl;

    // // Hero S(70,'C');
    // S.print();

    // //Copy constructor
    // Hero h(S);
    // h.print();
    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[8]="Pranjal";
    // hero1.setName(name);
    // hero1.print();

    // //use default copy constructor 

    // Hero hero2(hero1);
    // hero2.print();

    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();




    // Hero a;
    // a.setHealth(50);
    // a.setLevel('A');
    // cout<<"Level is:"<<a.level<<endl;
    // cout<<"Health is:"<<a.getHealth()<<endl;
    //dynamically
    // Hero *b=new Hero;

    // b->setHealth(80);
    // b->setLevel('B');

    // cout<<"Health is:"<<(*b).getHealth()<<endl;
    // cout<<"Level is:"<<(*b).level<<endl;

    // cout<<"Health is:"<<b->getHealth()<<endl;
    // cout<<"Level is:"<<b->level<<endl;


    // Hero pranjal;
    // // pranjal.health=80;
    // pranjal.level='A';
    // //setter
    // pranjal.setHealth(50);
    // // cout<<"Size:"<<sizeof(pranjal)<<endl;
    // cout<<"Health is:<<"<<pranjal.getHealth()<<endl;
    // cout<<"Level is:"<<pranjal.level<<endl;


    return 0;
}