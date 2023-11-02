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
	    int a[n],minCount=INT_MAX,maxCount=INT_MIN,count=1;
	    f(n) cin>>a[i];
	    f(n-1){
	        if((a[i+1]-a[i])<=2) count++;
	        else{
	            if(count<minCount) minCount=count;
	            if(count>maxCount) maxCount=count;
	            count=1;
	        }
	    }
	    if(count<minCount) minCount=count;
	    if(count>maxCount) maxCount=count;
        cout<<minCount<<" "<<maxCount<<e;
	}
	return 0;
}

// we check for each positon difference i.e. when the diff is less than 2 we increase the count and when diff is more 
// than 2 we check if it sets in min count or max count and assign accordingly and at last we iterated till n-1
// so we again check for the min and max count final time after checking for count in loop and print the min & max count