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
	    f(s.length()){
	        if(s[i]>='0' && s[i]<='9'){
	            ans+=(s[i]-'0');
	        }
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// in the given string we iterate over it and check if that character is greater than char 0 and less than char 9 we reduces 
// char 0 from the initial char to get integer value. 
// ex: char 0 = 48 in ascii
// suppose we are given char 1 = 49
// so '1'-'0'=1 i.e. in ascii it is 49-48=1
// so we keep adding it and print the sum of numbers
