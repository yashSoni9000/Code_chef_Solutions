#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    int count=0;
	    n*=x;
	    while(n){
	        n/=10;
	        count++;
	    } 
	    if(count==5) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we only need to check if the number has 5 digits or not so we can do that by dividing it by 10 unitl the number becomes 0 
// if when dividing the count of number divided by 10 is exactly 5 then it is a 5 digit number and we print yes else print no