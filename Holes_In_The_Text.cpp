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
	    int a[26]={1,2,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},ans=0;
	    string s;
	    cin>>s;
	    f(s.length()) ans+=a[s[i]-'A'];
	    cout<<ans<<e;
	}
	return 0;
}

// made an array to store the numbe of holes in each of the capital letter of english alphabet and as we are given the
// string we take each character and add its value to our answer and print the answer at the end