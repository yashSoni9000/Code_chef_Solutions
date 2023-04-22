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
	    int a=0,b=0;
	    string s;
	    cin>>s;
	    f(s.length()){
	        if(s[i]=='a') a++;
	        else b++;
	    }
	    cout<<min(a,b)<<e;
	}
	return 0;
}


// this question was simply telling us to find the number of color of baloon which were minimum in the total given number of string
// we took a loop and checked the number of a and b and printed min of a and b