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
	    string s;
	    int ans,count0=0,count1=0;
	    cin>>s;
	    f(n){
	        if(s[i]=='0') count0++;
	        else count1++;
	    }
	    ans=(min(count0,count1)*2)+1;
	    if(ans>n) cout<<n<<e;
	    else cout<<ans<<e;
	}
	return 0;
}

// on observation we get that the min count of 0 or 1 when doubled and added 1 gives us the longest substring with alternating
// 0 and 1, if that number is greater than the string itself then it can be said that the given string can me made alternating
// be arranging