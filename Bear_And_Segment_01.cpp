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
	    string s;
	    int count0=0;
	    bool ans=true,temp=false;
	    cin>>s;
	    f(s.length()){
	        if(s[i]=='0') count0++;
	       if(s[i]=='1'&& s[i+1]=='0') temp=true;
	       if(temp){
	           if(s[i]=='0'&& s[i+1]=='1') ans=false;
	       }
	    }
	    if(ans&& count0<s.length()) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to check if the string of 1 breaks in between and to do this we check if there exist 0 after 1 and also after that
// there exists 1 after 0, if true then there is a break in 1 string also we need to check for cases where all the numbers
// are 0 so we check the count of 0 and also check if it is less then the string length and ans=true then only we print yes 
// else print false