#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,k;
	cin>>t;
	while(t--)
	{
	    cin>>k;
	    int temp=k;
	    while((temp+k)<=52){
	        temp+=k;
	    }
	    cout<<52-temp<<e;
	}
	return 0;
}

// we add k to number till the sum is less than or equal to 52 then and then we reduce the remaining cards from 52
// to get the lefover card and print them