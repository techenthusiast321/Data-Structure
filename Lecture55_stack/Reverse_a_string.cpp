#include<iostream>
#include<stack>
using namespace std;

int main(){
    string str="Pranjal";
    
    // cout<<str.length()<<endl;
    stack<char> s;
    int n=str.length();
    for(int i=0;i<n;i++){
        s.push(str[i]);
    }
    string ans="";
    //pop elements
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
        
    }

    cout<<ans<<endl;
    return 0;
}