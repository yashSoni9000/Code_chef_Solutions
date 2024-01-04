#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

char isVowel( char c){
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
    else return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    bool ans=true;
	    string s;
	    int a[8]={0,1,0,1,0,1,0,0};
	    cin>>s;
	    f(8){
	        bool check=isVowel(s[i]);
	        if(check!=a[i]){
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we make array of string codetown with 0 & 1 where 0 denotes consonants and 1 denotes vowels and i check for given string
// if current character matches with that place array we continue else we break the loop and print answer no 