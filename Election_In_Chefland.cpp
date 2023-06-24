#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,a;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n>>x;
	    while(n--){
	        cin>>a;
	        if(a>=x) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// we need to find the numbers of people who are above age x so we take input n times and check each time that if the current 
// person age is greater than or equal to x we can increase the count and till n times we can then print the count of eligible 
// memebers