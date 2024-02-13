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
	    int count=0;
	    string s1,s2;
	    cin>>s1>>s2;
	    f(n){
	        if(s2[i]=='N') continue;
	        else{
	            if(s1[i]==s2[i]) count++;
	            else i++;
	        }
	    }
	    cout<<count<<e;
	}
	return 0;
}

// we need to check if given digit in s2 is 'N' then we do not need to perform any event else if both are equal char in s1 & s2
// we increase the count else we increase the i increment in loop to skip the next answer. 
// Finally we print the count 