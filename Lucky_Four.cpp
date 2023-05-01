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
	    int temp,count=0;
	    cin>>n;
	    while(n)
	    {
	        temp=n%10;
	        if(temp==4) count++;
	        n/=10;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// we need to find the number of 4s in the number.So i took the last digit
// spereated it using %10 and checked if 
// that digit is 4 we increment the count else and then 
// divided the number by 10. and we loop it until the number is 0.