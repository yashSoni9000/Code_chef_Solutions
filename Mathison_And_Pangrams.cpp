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
	    int a[26],b[26]={0};
	    f(26) cin>>a[i];
	    string s;
	    int ans=0;
	    cin>>s;
	    f(s.length()) b[s[i]-'a']++;
	    f(26){
	        if(b[i]<1) ans+=a[i];
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// we store the feq of character of string in an array of 26 length as there are 26 alphabets and check if that char freq is 0
// we take the index and from the cost array we get the cost of that index and add to our answer and print it