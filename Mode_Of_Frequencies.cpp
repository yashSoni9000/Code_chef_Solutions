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
	    int temp,mini=INT_MAX,maxi=INT_MIN;
	    map<int,int> mp;
	    map<int,int> mp1;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp) mp1[it.second]++;
	    for(auto it:mp1) if(it.second>maxi) maxi=it.second;
	    for(auto it:mp1) if(it.first<mini &&maxi==it.second) mini=it.first;
	    cout<<mini<<e;
	}
	return 0;
}

// we need to find freq of freq and then from that freq of freq we need to find max value freq with min value and print it