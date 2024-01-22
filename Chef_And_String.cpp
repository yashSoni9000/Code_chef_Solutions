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
	    int ans=0;
	    string s;
	    cin>>s;
	    f(s.length()-1){
	        if(s[i]!=s[i+1]){
	            ans++;
	            i++;
	        }
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// for the length of given s we check if the initial char is not same as next char if year we increase the count of answer
// and increase the i in loop as well as the next char is already checked and included in the answer.