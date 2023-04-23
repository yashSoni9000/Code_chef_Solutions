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
	    int count=0;
	    while(n!=50){
	        if(n>50) n-=3;
	        else n+=2;
	        count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// i first solved this problem with a longer apprach then i realised that its can be solved solves easily so i am showing you
// easier method we simply do what we are told to do chef need 50% battery so we make a loop till battery is 50%
// and if battery is greater than 50% then we decrease battery by 3% else we increase battery by 2% and every time loop is executed
// we increment the number of minutes it took to get 50% battery