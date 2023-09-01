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
	    cin>>s;
	    int a[26]={0},ans=0;
	    f(n) a[s[i]-'a']++;
	    f(26) if(!(a[i]%2)) ans+=a[i];
	    if(ans==n) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// I first stored the frequency of alphabets and then checked that if the frequency is even number then
// I add that frequency to my answer and at last ,if the ans has a sum equal to n then all the freq of numbers
// are in even and we can print yes else we print no