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
	    int arr[1010]={0},num,ans=0,max=0,index=0,a[n];
	    f(n) cin>>a[i];
	    f(n) arr[a[i]]++;
	    f(1010){
	            if(arr[i]>max){
	            max=arr[i];
	            index=i;
	        }
	    }
	    f(n) if(a[i]!=index) ans++;
	    cout<<ans<<e;
	}
	return 0;
}

// we first take the frequency of given number in aray of 1000
// we then see the max of elements in the freq array and also store the index
// at last we check if the index is not equal to the max freq index we add it to asnwer and print the value 