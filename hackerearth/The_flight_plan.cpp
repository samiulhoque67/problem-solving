#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,m=0,c=0,t=0;
    cin>>n>>m>>c>>t;
    vector<int> adj[n+1];
    vector<int> vis(n,false);
    queue <int> q;
    for(int i=0;i<m;i++)
    {
        int s=0,d=0;
        cin>>s>>d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }
    for(int i=0;i<n+1;i++)
    {
    sort(adj[i].begin(), adj[i].end());
    }
    int src=0,dest=0;
    cin>>src>>dest;
    int flag=0;
    q.push(src);
    vis[src]=true;
    int pd[n+1];
    memset(pd,-1,sizeof(pd));
    while(!q.empty())
    {
        int g=q.front();
        q.pop();
         if (flag == 1) {
    	break;
    }
        for(int i=0;i<adj[g].size();i++)
        {
           if(vis[adj[g][i]]==false)
           {
            vis[adj[g][i]]=true;
            pd[adj[g][i]]=g;
            q.push(adj[g][i]);
            if(adj[g][i]==dest)
            {
                flag=1;
                break;
            }
           }
        }
    }
    int d=dest;
    vector<int> record;
    while(d!=src)
    {
        record.push_back(d);
        d=pd[d];
    }
    record.push_back(src);
    int s=record.size();
    cout<<s<<endl;
    for(int i=s-1;i>=0;i--)
    {
        cout<<record[i]<<" ";
    }
    return 0;
}
