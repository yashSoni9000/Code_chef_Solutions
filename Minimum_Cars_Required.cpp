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
	    if(n%4) cout<<(n/4)+1<<e;
	    else cout<<n/4<<e;
	}
	return 0;
}

// if the number of people are multiple of 4 then we do not need extra cars as they will be sufficient for n/4 cars
// but if it is not a multiple of 4 then we will need one extra car for taking remaining persons