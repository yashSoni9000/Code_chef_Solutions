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
	    int index=0;
	    string s;
	    cin>>s;
	    int pos=0;
	    while(s[pos]!='1'){
            pos++;
        }
	    // Trial Approach
	   // f(n){
	   //     if(s[i]=='1'){
	   //         index=i;
	   //         break;
	   //     }
	   // }
	   // if(s[n-2]=='0'&&s[n-1]=='0'){
	   //    // for(int i=index+1;i<n;i++) if(s[i]=='1') s[i]=='0';
	   // }
	   // else if(s[n-2]=='0'&&s[n-1]=='1'){
	   //    // for(int i=index+1;i<n;i++) if(s[i]=='1') s[i]=='0';
	       
	   // }
	   // else if(s[n-2]=='1'&&s[n-1]=='0'){
	   //    // for(int i=index+1;i<n;i++) if(s[i]=='1') s[i]=='0';
	       
	   // }
	   // else {
	        
	   // }
	   // for(int i=index+1;i<n-1;i++) if(s[i]=='1') s[i]='0';
	   
	   //Another Approach
	   for(int i=n-3;i>=pos;i--){
	       s[i]='1';
	           s[i+1]='0';
	           s[i+2]='0';
	       }
	   cout<<s<<e;
	   }
	return 0;
}

// we first need to get the first occurence of 1 and then we traverse from last and we replace in triplets by 100
// and print the answer