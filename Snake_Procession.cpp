#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test,n;
	cin>>test;
	while(test--)
	{
	    cin>>n;
	    string s,temp;
	    bool h=false,t=false,ans=true;
	    cin>>s;
	    f(n) if(s[i]!='.') temp+=s[i];
	   int len=temp.length();
	    for(int i=0;i<=len-1;i+=2){

	        if(temp[i]=='H' && temp[i+1]=='T') ans=true;
	        else{
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"Valid"<<e;
	    else cout<<"Invalid"<<e;
	}
	return 0;
}

// we do not need the . so i removed them and made a fresh string consiting of only h and t and checked in pairs that if 
// h and t occurs simultaneously then we can say that our answer is true else the report is invalid