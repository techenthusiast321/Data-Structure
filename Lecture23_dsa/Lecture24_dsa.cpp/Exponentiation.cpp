#include<iostream>
using namespace std;

int main(){
    int x,n,m;
    cout<<"Enter the values:"<<endl;
    cin>>x;
    cin>>n;
    cin>>m;
    int mul;
    int ans;
    for(int i=1;i<=n;i++){
        mul=mul*x;
    }
    ans=mul%m;
    cout<<ans<<endl;
    return 0;
}