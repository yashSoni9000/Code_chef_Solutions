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
	    bool ans=true;
	    cin>>s;
	    for(int i=0;i<s.length();i+=2){
	        if(s[i]==s[i+1]){
	            ans=false;
	            break; 
	        } 
	    }
	    if(ans) cout<<"yes"<<e;
	    else cout<<"no"<<e;
	}
	return 0;
}

// we take a for loop and increment it by 2 every time and check if the initial value and its next value
// are equal we break the loop and make ans=false if ans is true we print yes else no
// one thing to note is that the yes and no are case sensitive