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
	    string s;
	    cin>>s;
	    int temp=n-1,count=0;
        // my approach
	   // int count0=0,count1=0,count10=0,temp=n-1;
	   // f(n/2){
	   //     if(s[i]!=s[temp]) count10++;
	   //     temp--;
	   // }
	   // f(n){
	   //     if(s[i]=='1') count1++;
	   //     else count0++;
	   // }
	   // count1/=2;
	   // count0/=2;
	   // cout<<(min(min(count1,count0),count10))<<e;
       // solution
	   f(n/2){
	       if(s[i]!=s[temp]) count++;
	       temp--;
	   }
	   if(count%2) count=(count/2)+1;
	   else count/=2;
	   cout<<count<<e;
	}
	return 0;
}

// here i first tried my approach where i saw a pattern in the pair of 0 and 1 but it failed so i took the hint and solved it
// we need to check if the digit are not same in front and back then we increase the counter and after the loop we check
// if that counter is odd we divide it by 2 and add 1 else we divide by 2 and after that we print it.