#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>edges[100];
int i,edge,nodes,x,y,j,source,dest;
cin>>edge>>nodes;
int level[100],visited[100],parent[100];
for(i=1;i<=edge;i++)
{

    cin>>x>>y;
    edges[x].push_back(y);
    //edges[y].push_back(x);

    //cost[x].push_back(1)

}
cout<<"give a source node and destination node";
cin>>source>>dest;
queue<int>q;
q.push(source);
level[source]=0;
visited[source]=1;
int v,p=0;
while(!q.empty()){
    int u=q.front();
    q.pop();
    for(i=0;i<edges[u].size();i++){
            v=edges[u][i];
            if(visited[v]!=1){

            parent[v]=u;
            level[v]=level[u]+1;

            visited[v]=1;
            q.push(v);
              }

    }




}
//level of the node
for(j=1;j<=nodes;j++){


cout<<level[j]<<endl;

}
vector<int>arr;
arr.push_back(dest);
while(parent[dest]!=source){
    p=parent[dest];
    arr.push_back(p);
    dest=p;

}
//path to go to the destination
arr.push_back(source);
for(i=arr.size()-1;i>=0;i--)

{
    cout<<arr[i]<<" ";
}

}

