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
	    int a[n+1]={0},num,count=0,maxcount=0;
	    f(n){
	        cin>>num;
	        if(a[num]==0){
	            count++;
	            a[num]=1;
	        }
	        else{
	            a[num]=0;
	            count--;
	        }
	        if(maxcount<count) maxcount++;
	    }
	    cout<<maxcount<<e;
	}
	return 0;
}

// lets take an example to understand it better
// n=7
// 1 2 1 5 4 1 1
// now lets divide our question into 2 part , one is count denoting current employee in room and
// other is maxcount denoting max number of employee it had
// now 1 comes in so 
// count=1 and maxcount=1 
// this means that there are currently 1 person in room and 1 max persons
// now 2 comes in 
// count=2 and maxcount=2
// 2 people are there in room and 2 max people in room currently
// now 1 leaves
// so only 1 people in room but still there were 2 max people 
// now 5 comes
// this so this again incrases the count to 2 but still there are max of 2 people
// now 4 comes
// count increases to 3 so max count also increases to 3
// 1 comes 
// here previously 1 left but joined again so count is again increased in the room and so do the max count to 4
// now 1 leaves
// so count of people in room is 3 but max people were still 4
// so 4 is our answer
// ***********Things to note**********
// maxcount will always increase
// count may increases or decrease
// when count reaches its new higher count maxcount also increases