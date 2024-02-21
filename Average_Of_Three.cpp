#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int temp;
        cin>>temp;
        int sum=temp*3;
        int first=sum-1;
        int second=sum-2;
        int third=sum-3;
        cout<<sum-first<<" "<<sum-second<<" "<<third<<" "<<e;
	}
	return 0;
}

// if we need to find 3 numbers there can be infinite possibilites therefore we can always print 1 2 and "other number", 
// to caluclate this other number we need to first multiple the mean by 3 cause x+y+z/3= mean so x+y+z=mean*3
// new as i mentioned earlier first 2 numbers can always be 1 and 2 and third number can be -3 from sum 
// ans we print them