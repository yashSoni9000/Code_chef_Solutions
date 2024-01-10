#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t=1;
// 	cin>>t;
	while(t--)
	{
	    int x,y,z,n,temp,count=0;
	    map<int,int> mp;
	    vector<int> v;
	    cin>>x>>y>>z;
	    n=x+y+z;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp){
	        if(it.second>1){
	            count++;
	            v.push_back(it.first);
	        }
	    }
	    cout<<count<<e;
	    f(count) cout<<v[i]<<e;
	}
	return 0;
}

// we need to get the count of each number and check whose count is greater than 1 if it is greater than 1 we add to our count
// and push in vector as final answer and print all at last