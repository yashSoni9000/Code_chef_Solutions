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
	    int temp,ans=0;
	    f(n){
	        cin>>temp;
	        ans+=temp;
	    }
	    if(ans%2) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we need to distribute the number of candies , so we need the total number of candies first and then by observation
// we can see that if the number of totla candies are odd then the given condition will meet else not possible 
// here is example
// if the total number of candies are 5 then:
// 3 for sammy and 2 for simmy can be given and no other combination is possible 
// if the total number of candies are 4 then:
// possible combination are:
// 2 2 // first condition not met
// 3 1 // second condition not met