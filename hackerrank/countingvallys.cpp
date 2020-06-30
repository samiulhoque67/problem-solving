
#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
int n;
cin>>n;
cin>>s;
int len=s.length();
int level=0;
int valley=0;
for(int i=0;i<n;i++){
    if(s[i]=='U'){
        level++;}
     if(s[i]=='D'){
        level--;
     }
     if(level==0 && s[i]=='U'){
        valley++;
     }


}
cout<<valley;

}
