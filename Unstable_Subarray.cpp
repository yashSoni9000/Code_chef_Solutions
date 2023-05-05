#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

ll subset(ll n){
    return (n*(n-1))/2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll temp,total,ans=0;
	    map<ll,ll> mp;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp) ans+=subset(it.second);
	    total=subset(n);
	    cout<<total-ans<<e;
	}
	return 0;
}

// we are using map as we want to count the frequency of each element in the array then through that frequency we can find the //
//number of subsets.
// we need to find subset because if the starting and ending of the subset are same then its a stable subarray and if we find total
// number of stable subarray then we can find unstable array by subtracing stable array from it and that will be our answer.
// eg 5
// 1 2 3 2 2 
// we get the frequency of each element in the array and we can find the number of subsets by using the formula n*(n-1)/2
// then we check frequency of each value in map and we again find the number of subsets by using the formula n*(n-1)/2
// by the frequency we will get stable sub array and then we subtract from total number of subsets to get the number of unstable subarray.
// map looks like this
// 1: 1
// 2: 3
// 3: 1

// we get the subset of each value and then get the stable subarray and follow the rest of the process