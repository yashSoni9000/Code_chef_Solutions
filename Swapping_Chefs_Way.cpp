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
	    bool ans=true;
	    string temp,s;
	    cin>>temp;
	    s=temp;
	   int st=0,end=n-1;
	   while(st<end){
	       if(s[st]>s[end]) swap(s[st],s[end]);
	       st++;
	       end--;
	   }
	   sort(temp.begin(),temp.end());
	   f(n){
	       if(s[i]!=temp[i]){
	           ans=false;
	           break;
	       }
	   }
	   if(ans) cout<<"YES"<<e;
	   else cout<<"NO"<<e;
	}
	return 0;
}

// we need to use 2 pointer 1 from start and 1 from end and check if start pointer is more than end pointer we swap them
// and after swapping if it is an sorted string we print yes else print no