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
	    int arr[3];
	    f(3) cin>>arr[i];
	    sort(arr,arr+3);
	    cout<<arr[1]+arr[2]<<e;
	}
	return 0;
}

// we only need the last 2 elements of the sorted array so we put given 3 numbers in the array
// and sort them to get our ansewer
// eg:
// 6 3 4
// taking these numbers in array and then we sort them so our elements in the array are 
// 3 4 6
// now we simply print the sum of last 2 numbers in our case answer is 10