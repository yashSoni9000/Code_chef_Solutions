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
	    int temp,a[11],n,count=1,ans;
	    map<int,int> mp;
	    double sum = 1;
	    f(11){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    cin>>n;
	    sort(a,a+11);
	   temp=a[11-n];
	   ans=mp[temp];
	   
	   for(int i=12-n;i<11;i++){
	       if(a[i]==temp) count++;
	   }
	   for(int i = 1; i <= count; i++){
            sum = sum * (ans - count + i) / i;
        }
        cout<<(int)sum<<e;
	   
	}
	return 0;
}

// first we store the freq of the numbers in map so that we know which numbers appears how many times so that we can apply
// nCr formula(more on this later), we then sort the given array and get the k element from the last ans store it
// then we also get the freq of that number for the nCr formula and then we check how many are same number are included
// and store it in as r of nCr formula and we then use the formula to get our answer