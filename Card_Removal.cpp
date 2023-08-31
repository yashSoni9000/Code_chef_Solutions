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
	    int a[11]={0},temp,ans=0;
	    f(n){
	        cin>>temp;
	        a[temp]++;
	    }
	    sort(a,a+11);
	    f(10) ans+=a[i];
	    cout<<ans<<e;
	}
	return 0;
}

// since it is know that the numbers can between 1 and 10 only i made an array of 11 so that i can store the 
// frequency of numbers upto 10 and as i took the numbers i took the count of each number in the array 
// after that i sorted it and we know that only last i.e. highest element will not be required to change 
// else all the elements will be added and we print that added answer