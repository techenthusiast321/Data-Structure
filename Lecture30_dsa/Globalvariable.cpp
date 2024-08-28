#include<iostream>
using namespace std;
int score=15;//GLobal variable
//Bad practice

void a(int& i){
    cout<<i<<endl;
    // b(i);
}

void b(int& i){
    cout<<i<<endl;
}
int main(){
    int i=5;
    a(i);
    cout<<score<<endl;
    return 0;
}