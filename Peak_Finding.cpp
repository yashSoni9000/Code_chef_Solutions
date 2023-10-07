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
	    int temp,max=0;
	    cin>>n;
	    f(n){
	        cin>>temp;
	        if(temp>max) max=temp;
	    }
	    cout<<max<<e;
	}
	return 0;
}

// we take the input and when we find a number greater than max number we assign that number to max , then again the process
// repeates and we print the max number