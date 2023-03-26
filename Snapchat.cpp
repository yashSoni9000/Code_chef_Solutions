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
	    int arr1[n],arr2[n],maxStreak=0,streak=0;
	    f(n) cin>>arr1[i];
	    f(n) cin>>arr2[i];
	    f(n){
	        if(arr1[i]==0 || arr2[i]==0){
	            if(maxStreak<streak) maxStreak=streak;
	            streak=0;
	        } 
	        else streak++;
	    }
	    cout<<max(maxStreak,streak)<<e;
	}
	return 0;
}

// lets take an example to understand it better
// 15
// 1 1 1 0 1 1 1 1 0 1 1 1 1 1 0
// 1 1 1 0 1 1 1 1 0 1 1 1 1 1 0
// lets increase streak for the first 3 days as both of them each other
//  and on 4th day no one send snap to each other so out streak is set to 0
//  but before we do streak to 0  we store it in another value to check if this is
//  the longest streak in the given days so if maxStreak< streak we give streak to maxStreak
//  here in our case maxStreak=3 . Similarly we do for next 4 and next 5 so we get maxStreak=5
// now we can print the maxStreak. but wait what if ther is no 0 in any of the given array , then
// our answer will be zero as streak is increasing and maxStreak is the same so we take the max of
// streak and maxstreak