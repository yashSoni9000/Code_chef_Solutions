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
	    int a[26]={0},ans=0;
	    bool yes=false;
	    string s;
	    cin>>s;
	    f(s.length()) a[s[i]-'a']++;
	    f(26){
	        if(a[i]>1){
	            yes=true;
	            break;
	        }
	    }
	    if(yes) ans=n-2;
	    else ans=-1;
	    cout<<ans<<e;
	}
	return 0;
}

//the maximum subsequence can be only taken out and make smallest palindrome is when two to same characters are present
// so in this question we only need to check if there are string which are repeating 2 times so for answer we simply 
// need to take out those 2 number from given n and print our answer else all are present only one time ans we 
// given ans=-1 