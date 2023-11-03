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
	    double btw=0,updown=0,temp;
	    cin>>n>>d;
	    f(n){
	        cin>>temp;
	        if(temp<=9 || temp>=80) updown++;
	        else btw++;
	    }
	    cout<<ceil(updown/d)+ceil(btw/d)<<e;
	}
	return 0;
}

// we can consider the person less than 9 or greater than 80 to be on the same category since they are at risk 
// rest all in non risk category threfore we count the two category and then print the sum of them by dividing
// the number of day d given to us and print the answer