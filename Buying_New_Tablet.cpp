#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,b;
	cin>>t;
	while(t--)
	{
	    cin>>n>>b;
	    int p,w,h,maxSize=INT_MIN;
	    f(n){
	        cin>>w>>h>>p;
	        if((w*h)>maxSize && p<=b) maxSize=w*h;
	    }
	    if(maxSize==INT_MIN) cout<<"no tablet"<<e;
	    else cout<<maxSize<<e;
	}
	return 0;
}

// as i am taking one by one input i check that if area is greater then previos greater area AND price is within
// the budget of chef then the new area is product of that affordable tablet