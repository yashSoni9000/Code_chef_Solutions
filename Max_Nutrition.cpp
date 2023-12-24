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
	    int a[n],temp,sum=0;
	    f(n) cin>>a[i];
	    map<int,int> mp;
	    f(n){
	        cin>>temp;
	        if(mp[a[i]]<temp) mp[a[i]]=temp;
	    }
	    for(auto it:mp){
	        if(it.second>0) sum+=it.second;
	    }
	    cout<<sum<<e;
	}
	return 0;
}

// first we take the input of fruit type and then whle taking nutrition input we check if it is less then previous nutrition
// we continue else we assing higher nutrition to that fruit and at last for each fruit if nutrition is positive we add to our
// answer and finally print it