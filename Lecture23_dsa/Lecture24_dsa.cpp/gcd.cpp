#include<iostream>
using namespace std;


int gcd(int n,int m){
    int ans;
       if(n>m){
        for(int i=1;i<=n;i++){
            if(n%i==0 && m%i==0){
                ans=i;
            }
        }
       }
       else{
            for(int i=1;i<=n;i++){
                if(n%i==0 && m%i==0){
                    ans=i;
                }
            }
       }
       return ans;

}
int main(){
    cout<<"Enter 2 values"<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}