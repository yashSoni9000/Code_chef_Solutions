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
	    string s;
	    cin>>s;
	    map<char,int> mp;
	    int maxi=INT_MIN,sum=0;
	    char chuppy;
	    f(s.length()){
	        mp[s[i]]++;
	        if(mp[s[i]]>maxi){
	            maxi=mp[s[i]];
	            chuppy=s[i];
	        }
	    }
	    for(auto it:mp){
	        if(it.first!=chuppy) sum+=it.second;
	    }
	    if(sum==maxi) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// in this question we need to check if the highest freq in the given string is equal to the rest for the freq of character
//  in the string if equal we print yes else print no
