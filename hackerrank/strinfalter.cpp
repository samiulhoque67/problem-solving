#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

    string s;
    cin>>s;
    int count1=0;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(s[i]==s[i+1]){
                count1++;

        }

    }
    cout<<count1<<endl;
}

}
