#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int u=0,d=0;
	    string s;
	    cin>>s;
	    f(s.length()){
	        if(s[i]!=s[i+1]){
	            if(s[i]=='U') u++;
	            else d++;
	        }
	    }
	    cout<<min(u,d)<<e;
	}
	return 0;
}

// we check while parsing the string that if there is a change in character we check that if initial char is U then 
// its previous segment was U so we increment the count of u segment else increment counter of d segment , till last
// we check and then we print that segment which is min of the given 2 