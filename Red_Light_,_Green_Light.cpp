#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int player,count=0;
	    f(n){
	        cin>>player;
	        if(player>k) count++;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// lets take example to understand it
// we do not need an array to solve this
// eg
// 5 10
// 12 3 2 9 11
// as we take input i check that if the given player height is greater than both's height
// in our case 12 its true so we increase the count from 0 to 1
// 3 , 2, 9 are less than 10 so condition is false so we continue
// at last we check 11 is greater than 10 so we again increment the count
// so our count is 2 and we then print it