
#include<bits/stdc++.h>
using namespace std;




int main(){

int n;
long long int l;
cin>>n>>l;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
long long int sum=0;
int count=0;
sort(arr,arr+n);

for(int i=0;i<n;i++){

    sum+=arr[i];
    if(sum<=l){
    count++;
    }
}
cout<<count;
}
