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
	    map<string,int> mp;
	    f(8){
	        cin>>s;
	        mp[s]++;
	    }
	    if(mp.size()<7) cout<<"similar"<<e;
	    else cout<<"dissimilar"<<e;
	}
	return 0;
}

// since the ingredients in each of the dishes are distince we can use map to store the freq of each dish and check 
// if the total size of map is less then 7 then there must be 2 ingredients repeating therefore the common ingredient
// are similar else they are not similar