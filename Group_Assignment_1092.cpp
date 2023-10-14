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
	    int temp;
	    bool ans=true;
	    map<int,int> mp;
	    f(n){
	        cin>>temp;
	        mp[temp]++;
	    }
	    for(auto it:mp){
	        if(it.second%it.first){
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// suppose take the following number 
// 15
// 3 2 2 2 4 4 4 4 3 3 2 4 4 4 4
// now one group of 3 is satisfied but as you can see that there are 2 pairs of '2' so this is also a possible
// combination therefore if the count of number is multiple of the group they want then we can say that chef can 
// make all of them happy else he can not
