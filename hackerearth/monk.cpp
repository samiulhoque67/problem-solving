
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    vector<int>edges[10005];
    int level[10005],visited[10005];
    int i,edge,nodes,x,y,j,source,t;
    cin>>t;
    while(t!=0){
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
    source=1;
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
    //level of the node
    cout<<level[nodes]<<endl;


    t--;
    }

    }
