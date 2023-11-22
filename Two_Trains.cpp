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
	    int sum,max=INT_MIN,temp=0;
	    f(n-1){
	        cin>>sum;
	        temp+=sum;
	        if(sum>max) max=sum;
	    }
	    cout<<temp+max<<e;
	}
	return 0;
}

// on observing we can check which is max and then we add to total and print it as the max time is the only thing
// which will be added to total sum