#include<iostream>
using namespace std;

int pow(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    //Recursive call
    int ans=pow(a,b/2);

    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }


}
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int ans=pow(a,b);
    cout<<"Answer is:"<<ans<<endl;
    return 0;
}