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
	    int arr[n],count=n-1,min;
	    f(n) cin>>arr[i];
	    sort(arr,arr+n);
	    min=arr[0];
	    for(int i=1;i<n;i++) if(arr[i]==min) count--;
	    cout<<count<<e;
	}
	return 0;
}


//  watch the question we need to understand the question first , it is asking for us to find 
// number of elements which are other than the smallest number in the given array
// e.g. 
// 1 1 2 3 4 5 6
// here smallest number is 1 and ther are 2 of them so we need to perform 5 operations to make all of them equal
// i.e. leaving the first 2 and changing rest of them , note that we do not need to actually change the elements 
// to the min element we just need to print the number of elements which are different from the smallest element
// hence we first sort the array and then we store it , now we check if in the array the number are same as the smallest
// element we decrease from the total number of elements n which we have stored in count variable.