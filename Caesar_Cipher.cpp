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
	    string s,t,u;
	    int n,total=25;
	    string ans="";
	    cin>>n;
	    cin>>s>>t>>u;
	    int a[26]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	    int diff=a[t[0]-'a']-a[s[0]-'a'];
	    if(diff<0){
	        diff=abs(diff);
	        total-=diff-1;
	    }
        else total=diff;
	    f(n){
	        char c=((a[u[i]-'a']+total)%26)+'a';
	        cout<<c;
	    }
	    cout<<e;
	}
	return 0;
}

// first find the difference of the given string s and t and check if diff is negative then we need to remove that diff from total
// else we give total all the difference and for each character in string u we add that total and if it exceeds 26 number
// we move to starting of alphabet and print that character 