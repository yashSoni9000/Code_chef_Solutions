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
	    int a[n];
	    f(n) cin>>a[i];
	   // set<int> st;
	   // f(n-1){
	   //     int temp=a[i];
	   //     if(a[i]>a[i+1]){
	   //         for(int j=i+1;j<n;j++){
	   //             if(a[j]<temp) st.insert(a[j]);
	   //         }
	   //     }
	   // }
	   // cout<<st.size()<<e;
	   
	   //optimal approach
	   int count=0,temp=a[0];
	   for(int i=1;i<n;i++){
	       if(a[i]>temp) temp=a[i];
	       else count++;
	   }
	   cout<<count<<e;
	}
	return 0;
}

// we need to check if the number is greater than previous number we assign highest as that number and every number
// which is less than that highest number and comes after that will get a candy so we increase the count, we do it till
// the n numbers and print the count