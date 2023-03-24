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
	    int count=n,num,nxtnum;
	    cin>>num;
	    f(n-1){
	        cin>>nxtnum;
	        if(num==nxtnum) count--;
	        num=nxtnum;
	    }
	    cout<<count<<e;
	}
	return 0;
}

// Please observe that we can solve this question without using arrays . Let's take an exammple to understand
// 1 1 2 3 4 4
// we are given 6 elements so we give the total number of elements to count
// now we take a input first at line 16 and then rest of input later and check if the previous input i.e num==nxtnum
// if yes we decrease the count as per question cause we do not need duplicate frames and we give nxtnum to num
// and do it till the end of array
// 1 1 equal so 6-1=5
// 1 2 not equal so 5
// 2 3 not equal so 5
// 3 4 not equal so 5
// 4 4 equal so 5-1=4
// hence our ans is 4