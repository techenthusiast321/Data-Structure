#include<iostream>
using namespace std;

inline int func(int a,int b){
     return (a>b)?a:b;
}

int main(){
    int a=1;
    int b=2;
    int ans;
    ans=func(a,b);

    cout<<"Answer is: "<<ans<<endl;
    return 0;
}