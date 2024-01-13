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
	    int temp=n,ans=0,count=0;
	    while(temp>0){
	        demo=sqrt(temp);
	        ans=pow(demo,2);
	        temp-=ans;
	        count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// we find square root of given number if it in floating point it will be converted to integer and we double it to check if
// the given number is perfect square then the number will become 0 and end loop else it goes till we find a perfect square
// and each time we increment the counter and print the value at last