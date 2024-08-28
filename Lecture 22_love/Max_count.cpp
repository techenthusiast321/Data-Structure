#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    int ans=1;
    char ch;
    
    for(int i=0;i<str.length();i++){
        int count=1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>=ans){
            ans=max(count,ans);
            ch=str[i];
        }
        
    }
    cout<<"Maximum occurence of character  " <<ch<<" is "<< ans<<endl;
    return 0;
}