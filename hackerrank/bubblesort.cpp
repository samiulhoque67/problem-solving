
#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){

    cin>>arr[i];

}
int swaps=0;
for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1]){
                swaps++;
            swap(arr[j],arr[j+1]);}


    }

}

cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1];



}
