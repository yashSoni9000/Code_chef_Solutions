#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    map<int,int> mp;
	    int temp,maxFrq=INT_MIN,ans=0;
	    bool repeat=true;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp) if(it.second>maxFrq) maxFrq=it.second;
	    cout<<n-maxFrq<<e;
	}
	return 0;
}
