
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,x,y,w,n;
    vector<int>edge[100];
    vector<int>cost[100];
    cin>>k>>n;
    for(i=0;i<k;i++)
    {cin>>x>>y>>w;
        edge[x].push_back(y);

        cost[x].push_back(w);

    }
    int indegree[100],outdegree[100];
    for(i=0;i<100;i++)
    {

        indegree[i]=0;
    }
    for(j=1;j<=n;j++){
        outdegree[j]=edge[j].size();

    for(i=0;i<edge[j].size();i++)
    {

        ++indegree[edge[j][i]];
    }}
    cout<<"outdegree"<<endl;
    for(i=1;i<=n;i++)
    {

        cout<<i<<" "<<outdegree[i]<<endl;
    }
    cout<<endl<<"indegree "<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" "<<indegree[i]<<endl;
    }

}

