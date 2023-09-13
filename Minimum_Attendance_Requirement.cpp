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
	    int ans=0,temp;
	    string s;
	    cin>>s;
	    f(s.length()){
	        temp=s[i]-'0';
	        ans+=temp;
	    }
	    int a=120-n;
	    ans+=a;
	    if(ans>=90) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// after taking input of string s i checked that if chef was present on that day the we add to chef attendance 
// and we also check the remaining day , if remaining days+ the number of days chef was preset are greater than 90
// (75% 120 =90) then we can print yes else we print no