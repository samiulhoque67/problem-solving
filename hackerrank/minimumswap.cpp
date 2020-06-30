 #include<bits/stdc++.h>
using namespace std;
int main(){
int arr[100005];

int i,n,m,k1;
cin>>n;

int swaps=0;
for(i=0;i<n;i++){
    cin>>arr[i];
}

int temp;

for(i=0;i<n;i++){
        if(i!=arr[i]-1){
            swaps+=1;
            temp=arr[i];
            arr[i]=arr[arr[i]-1];
            arr[temp-1]=temp;
            //cout<<"temp  "<<arr[temp]<<"   arr "<<arr[i]<<" "<<endl;
            i-=1;}

}


cout<<swaps;;
}
