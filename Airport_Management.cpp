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
	    int a[1440]={0},temp,max=INT_MIN;
	    cin>>n;
	    f(2*n){
	        cin>>temp;
	        a[temp]++;
	    }
	    f(1440) if(a[i]>max) max=a[i];
	    cout<<max<<e;
	}
	return 0;
}

// the conflict only happens when 2 or more plane arrive or depart at the same time , so if a number is repeated then
// we count the frequency of all the number i.e. for arrival and departure in same array and print the highest freq
// of the number ,which will be the min number of runway required to get all the management smoothly