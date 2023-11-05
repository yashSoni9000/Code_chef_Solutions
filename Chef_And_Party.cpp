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
	    int a[n],party=0,temp,k=0;
	    map<int,int> mp;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp){
	        if(it.first<=party) party+=it.second;
	    }
	    cout<<party<<e;
	}
	return 0;
}

// we need to sort the given preference of people as to check if their conditions are met or not e.g.
// suppose 3 1 0 0 5 5 are preference
// sort gives 0 0 1 3 5 5 and we check if the number 0 is less then total number of people in party, currently 0 
// yes then we increase the count and move on similarly with 1 and 3 preference as well then at last 5 preference dosent
// meet so we break it and print the party people