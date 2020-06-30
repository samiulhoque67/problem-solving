#include<bits/stdc++.h>
using namespace std;
bool sortByVal(const pair<string, int> &a,
               const pair<string, int> &b)
{

        return a.second >b.second;}

int main()
{
	map<string,int> mymap;
	int n,b;
	string a;
	cin>>n;
	for(int i=0;i<n;i++){
        cin>>a>>b;
        mymap.insert({a,b});
	}

	vector<pair<string,int > > vec;

  map<string, int>::iterator it2;
  for (it2=mymap.begin(); it2!=mymap.end();it2++)
  {
    vec.push_back(make_pair(it2->first,it2->second));
  }


  sort(vec.begin(),vec.end(),sortByVal);


	for(int i=0;i<vec.size();i++)
	{
		cout <<vec[i].first <<" "<<vec[i].second << endl;
	}
	return 0;
}
