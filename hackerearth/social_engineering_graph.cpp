

    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    vector<int>edges[10005];
    int level[10005],visited[10005];
    int i,edge,nodes,x,y,j,t;

    memset(visited,0,sizeof (visited));
    memset(level,0,sizeof(level));
    for(i=1;i<=10004;i++)
    {
      edges[i].clear();
    }
    cin>>nodes>>edge;


    for(i=1;i<=edge;i++)
    {

        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);

        //cost[x].push_back(1)

    }
cin>>t;
int source,loop;
while(t!=0){
        cin>>source>>loop;
    memset(visited,0,sizeof (visited));
    memset(level,0,sizeof(level));

    level[source]=0;
    queue<int>q;
    q.push(source);

    visited[source]=1;

    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(i=0;i<edges[u].size();i++){

                if(visited[edges[u][i]]==0){


                level[edges[u][i]]=level[u]+1;

                visited[edges[u][i]]=1;
                q.push(edges[u][i]);
                  }

        }




    }
    int ans=0;
  for(i=0;i<=nodes;i++){
    if(abs(level[i]-level[source])==loop)
    {
        ans++;
    }}
    cout<<ans<<endl;

t--;
    }

    }
