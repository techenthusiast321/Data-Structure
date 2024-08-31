#include<iostream>
#include<vector>
using namespace std;
void permut(int arr[],vector<vector<int>> &ans,vector<bool>&vis,int index,int n,vector<int> &temp){
    if(index==n){
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<vis.size();i++){
        if(vis[i]==0){
            vis[i]=1;
            temp.push_back(arr[i]);
            permut(arr,ans,vis,index+1,n,temp);
            vis[i]=0;
            temp.pop_back();
        }
    }
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int> > ans;
    vector<int> temp;
    vector<bool> vis(3,0);
    permut(arr,ans,vis,0,3,temp);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}