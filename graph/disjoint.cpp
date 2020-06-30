#include<bits/stdc++.h>
#define Max 100
using namespace std;

int parent[Max];
int size;
void makeSet(int n)
{
parent[n]=n;

}

int Find(int reprasentative)
{
if (parent[reprasentative] == reprasentative)
{
return reprasentative;
}
parent[reprasentative] = Find(parent[reprasentative]);

return parent[reprasentative];
}
void Union(int a,int b)
{
int u = Find(a);
int v = Find(b);
if(u == v)
{
cout<<"frnds";
}
else parent[u]=v;
}
int main()
{
cin>>size;
for (int i=1; i <= size; i++)
{
makeSet(i);
}
Union(1,2);
Union(3,1);
Union(4,3);
Union(5,4);
Union(5,1);


for(int i=1;i<=size;i++){
    cout<<parent[i]<<" ";
}

return 0;
}
