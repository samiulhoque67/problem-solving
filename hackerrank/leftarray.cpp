#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr,arr2;

int i,n,m,k1;
cin>>n>>m;
for(i=0;i<n;i++){
        cin>>k1;

    arr.push_back(k1);

}


int j=0;


for(j=m;j<n;j++)
{
    arr2.push_back(arr[j]);

}
for(j=0;j<=m-1;j++){
    arr2.push_back(arr[j]);

}
for(i=0;i<arr2.size();i++){
    cout<<arr2[i]<<" ";
}




}
