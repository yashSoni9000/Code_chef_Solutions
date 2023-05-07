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
	    string s;
	    cin>>s;
	    int count=0;
	    f(n){
	        if(s[i]==s[i+1]) i++;
	        count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// if the character is same as of its next character then we increase the counter of i by 1 as they both are same and 
// we they will be sent in same packet and will take only a unit of time , notice that we always increment the count variable 
// as we need to sent packet every time , lets take an example to get it better
// eg : ccbgee
//  here we first checked that if 'c'=='c' yes then we increase the counter to the second c and now the for loop counter also increment
// i so now our i variable is at 'b' and checking again that if 'b'=='g' in our case its not true so we simply increase the
// count and now we are at g , so similarly we can find rest of them and print the answer