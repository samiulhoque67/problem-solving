#include<bits/stdc++.h>
using namespace std;
struct edge{


int u;
int v;
int w;
};
edge e[1000];
int pr[1000];
bool cmp(edge a,edge b)
{
    return a.w<b.w;
}
int find(int r)
{
    if(pr[r]==r)
    {
        return r;
    }
    return find(pr[r]);
}
int main()
{
    int i,k,j,n,m,x,y,z,count=0,s=0;
    cin>>n>>m;

    for(i=0;i<m;i++)
    {
        cin>>x>>y>>z;
        e[i].u=x;
        e[i].v=y;
        e[i].w=z;

    }
    sort(e,e+m,cmp);
    for(i=0;i<1000;i++)
    {
        pr[i]=i;
    }

    for(i=0;i<m;i++)
    {
        int f=find(e[i].u);
        int g=find(e[i].v);


        if(f!=g)
        {
            pr[f]=g;
            cout<<"u "<<e[i].u<<"   v"<<e[i].v<<endl;
            count++;
            s+=e[i].w;
            if(count==n-1)
            {
                break;
            }

        }
    }
    cout<<s<<endl;;

}

