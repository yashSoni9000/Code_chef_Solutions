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
	    int temp;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    if(n%2) cout<<"NO"<<e;
	    else{
	        bool ans=true;
	        for(auto it:mp){
	            if(it.second%2){
	                ans=false;
	                break;
	            }
	        }
	        if(ans) cout<<"YES"<<e;
	        else cout<<"NO"<<e;
	    }
	}
	return 0;
}

// we take the input n and check if n is odd then it is not possible to have exact same set else we check the freq of type of
// animal, if freq of all the given animal is a multiple of 2 then it is possible that we can divide all the freq in half
// else we print no