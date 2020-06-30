#include<bits/stdc++.h>
using namespace std;
int main(){

string s1,s2;
cin>>s1;
int len=s1.length();

int arr[150];

memset(arr,0,sizeof(arr));

for(int i=0;i<len;i++){

    arr[int(s1[i])]++;
}

int g=0;
vector<int>arr2;
for(int i=97;i<=122;i++){
         if(arr[i]>0){

            arr2.push_back(arr[i]);
         }
}

int v=arr2.size();
if(v==1){
    cout<<"YES";

}
else if(v==2){
    if(abs(arr2[0]-arr2[1])<=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else{

    sort(arr2.begin(),arr2.end());

    if(arr2[0]==arr2[v-2] && arr2[0]!=1)
    {

      if(arr2[v-1]-arr2[v-2]<=1){
        cout<<"YES";
      }
      else{
        cout<<"NO";
      }
    }
    else if(arr2[0]==1&&arr2[v-2]==1 && (arr2[v-1]-arr2[v-2])<=1){
        cout<<"YES";
    }
    else if(arr2[0]==1&&arr2[1]==arr2[v-1]){
        cout<<"YES";
    }
    else{
            cout<<"NO";

    }

}

}
