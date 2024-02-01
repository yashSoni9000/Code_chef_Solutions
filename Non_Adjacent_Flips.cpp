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
	    bool ans=true;
	    int count=0;
	    cin>>s;
	    f(n){
	        if(s[i]=='1'&&s[i+1]=='1'){
	            ans=false;
	            break;
	        }
	        if(s[i]=='0') count++;
	    }
	    if(count==n) cout<<0<<e;
	    else if(ans) cout<<1<<e;
	    else cout<<2<<e;
	}
	return 0;
}

// we need to check if there is occurance of '11' in string then it will take exactly 2 times to makes all 0 as the numbers
// numbers '1' left in first conversion will be converted to 0 in next turn also if there are no consecutive '11' we can
// say that we can convert all of them in one single go and we also check the count of 0 if it is equal to n we do not need
// to change anything.