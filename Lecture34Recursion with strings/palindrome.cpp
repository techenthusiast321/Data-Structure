#include<iostream>
using namespace std;

bool palindrome(string& str,int i,int j){
    if(str.length()==1||str.length()==0){
        return true;
    }
    if(i>j){
        return true;
    }
    if(str[i]==str[j]){
        return palindrome(str,i+1,j-1);
    }
    else{
        return false;
    } 
}

int main(){
    string str="abba";
    bool ans=palindrome(str,0,str.length()-1);
    if(ans){
        cout<<"The given string is a palindrome"<<endl;
    }
    else{
        cout<<"The given string is not a palindrome"<<endl;
    }
    return 0;
}