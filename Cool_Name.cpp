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
	    int ans=0,a[27]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    f(s.length()) ans+=((i+1)*a[s[i]-'a'+1]);
	    cout<<ans<<e;
	}
	return 0;
}

// for our power to be maximum we need to first sort the string so that the end character of alphabet appears at the 
// last of the string this will allow them to be multipled with larger number from the given formula and in a loop
// we add those value till the sorted length of string to get our answer