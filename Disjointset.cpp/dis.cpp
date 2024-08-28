#include<iostream>
#include<vector>
using namespace std;
class DisjointSet{
    vector<int> rank;
    vector<int> parent;
    vector<int> size;
    public:
    
    //constructor
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
    }

    int findUParent(int node){
        if(node==parent[node]){
            return node;
        }

        return parent[node]=findUParent(parent[node]);
    }
    

    void unionbyrank(int u,int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);

        if(ulp_u==ulp_v) return;

        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
    void unionbysize(int u,int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);

        if(ulp_u==ulp_v) return;

        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]=size[ulp_v]+size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]=size[ulp_u]+size[ulp_v];
        }
    }
};
int main(){
    DisjointSet ds(7);
    ds.unionbysize(1,7);
    ds.unionbysize(2,3);
    ds.unionbysize(4,5);
    ds.unionbysize(6,7);
    ds.unionbysize(5,6);
    //if 3 and 7 same or not
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    ds.unionbyrank(3,7);
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    return 0;
}