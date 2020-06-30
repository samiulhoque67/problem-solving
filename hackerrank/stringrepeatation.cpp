#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    long long int n;
    cin>>s;
    cin>>n;
    int len=s.length();
   long long int r=n%len;
    long long int v=n/len;
    long long int count=0;
    for( int i=0;i<len;i++){

        if(s[i]=='a'){

            count++;
        }
    }
    long long int res=count*v;
    if(r>0){
        for(int i=0;i<r;i++){
            if(s[i]=='a')
            {
                res++;
            }

        }
        cout<<res;
    }
    else{
    cout<<res;}

}
