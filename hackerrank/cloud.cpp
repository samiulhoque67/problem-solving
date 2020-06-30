#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n+1];
for(int i=0;i<n;i++){

    cin>>arr[i];
}
arr[n]=1;
int i=0;
int c=0;

for(i=0;i<n;){
        if(arr[i+2]==0){
            c++;
            i+=2;
            if(i==n-1){
                 break;
            }

        }
        else if(arr[i+1]==0){
            c++;
            i+=1;
            if(i==n-1){
                break;
            }
        }



}
cout<<c;
}
