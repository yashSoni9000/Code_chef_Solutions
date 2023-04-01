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
	    int s,j,count=0;
	    cin>>n;
	    while(n--){
	        cin>>s>>j;
	        if((j-s)>5) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// lets take example from question
// 1
// 5
// 1 3
// 4 4
// 4 10
// 1 11
// 2 7
// so for 5 turns we take input of when submission was made and when it was judged
// their difference is greater than 5 we increase the counter
// in our case 3-1=2 we continue
// 4-4=0 we continue
// 10-4=6 which is greater than 5 we increase the counter
// again 11-1=0 which is greater than 5 we increase the counter
// 7-5=5 which is not greater than 5 so we continue
// hence total number of increment are 2