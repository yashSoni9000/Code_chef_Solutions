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
	    int i=0;
	    string s;
	    bool ans=false;
	    cin>>s;
	    while(s[i]!='\0'){
	        if(s[i]=='7'){
	            ans=true;
	            break;
	        }
	        i++;
	        
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	    return 0;
}

// we took the numbers in a string format and checked if that number has 7 in it ,
// if true we make answer as yes and break it and print the answer as yes else print no