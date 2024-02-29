#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,q;
	cin>>t;
	while(t--)
	{
	    int temp,sum=0,l,r,diff;
	    cin>>n>>q;
	    f(n){
	        cin>>temp;
	        sum+=temp;
	    }
	    f(q){
	        cin>>l>>r;
	        diff=abs(l-r);
	        diff++;
	        if(diff%2) sum++;
	    }
	    cout<<sum<<e;
	}
	return 0;
}

// we need to check if the sub array we need to perform operations are odd, if odd them one will be added to total sum else
// the sum will remain same