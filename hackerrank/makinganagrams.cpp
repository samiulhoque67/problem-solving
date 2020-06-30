#include<bits/stdc++.h>
using namespace std;
int main(){

string s1,s2;
cin>>s1>>s2;
int len=s1.length();
int len2=s2.length();
int arr[150];
int arr2[150];
memset(arr,0,sizeof(arr));
memset(arr2,0,sizeof(arr2));
for(int i=0;i<len;i++){

    arr[int(s1[i])]++;
}
for(int i=0;i<len2;i++){

    arr2[int(s2[i])]++;
}
int g=0;
for(int i=97;i<=122;i++){
         g+=abs(arr[i]-arr2[i]);
}
cout<<g;

}
