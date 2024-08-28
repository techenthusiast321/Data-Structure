#include<bits/stdc++.h>
using namespace std;


void explainPair(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;

    pair<int,pair<int,int>> p={1,{3,4}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{8,9}};
    cout<<arr[1].first<<endl;

}

void explainVector(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.begin();
    v.end();
    
    for(auto it=v.begin(); it!=v.end(); it++) {
        cout<<*(it)<<" ";
    }
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }

    v.erase(v.begin());
    vector<int> v(5,20);
    vector<int> v1(v);

    vector<int>::iterator it=v.begin();
    it++;
    cout<<*(it)<<" ";

    

}