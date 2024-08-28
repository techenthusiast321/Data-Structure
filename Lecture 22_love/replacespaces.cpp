#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string:"<<endl;
    cin>>s;
    int i=0;
    string ans;
    while(s[i]!='\0'){
        if(s[i]==' '){
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else{
            ans.push_back(s[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}