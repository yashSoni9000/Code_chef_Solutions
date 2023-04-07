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
	    int arr[n],min=INT_MAX;
	    string s;
	    f(n) cin>>arr[i];
	    cin>>s;
	    f(s.length()) if(s[i]=='0' && arr[i]<min) min=arr[i];
	    cout<<min<<e;
	}
	return 0;
}

// lets take the values of test cases in array
// now we take string input
// lets take example to understand it
// 5
// 10 20 5 1 15
// 0   1 0 1 0    //this is binary string but written in this form to understand it better
// we have string length is 5 so we check if s[i] is 0 and arr[i] ie 10 < INT_MAX we give min to 10 so min=10
// now next is 1 condition is false
// next is 0 and 5 is less than 10 so our new min is 5 so min=5
// next string is 1 condition is false
// next is 0 and 15 is not less than 5 so we discontinue
// and then we print min