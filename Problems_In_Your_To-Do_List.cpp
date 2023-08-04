#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,d;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n;
	    f(n){
	        cin>>d;
	        if(d>=1000) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// while taking the input we check if the rating of given problem is greater than or equal to 1000 we increment the count 
// after taking the number of question for n times we can directly print the count of rating of number greater than 1000