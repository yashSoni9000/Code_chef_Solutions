#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    string s;
	    int zero=0,one=0;
	    cin>>s;
	    
	    // One Approach
	   // sort(s.begin(),s.end());
	   // if(x<=y) xOp=true;
	   // else yOp=true;
	   // if(yOp){
	   //     reverse(s.begin(),s.end());
	   //     for(int i=0;i<n-1;i++){
	   //         if(s[i]==1&&s[i+1]==0){
	   //             cout<<y<<e;
	   //             break;
	   //         }
	   //     }   
	   // }
	   // else{
	   //     for(int i=0;i<n-1;i++){
	   //         if(s[i]==0&&s[i+1]==1){
	   //             cout<<x<<e;
	                
	   //             break;
	   //         }
	   //     }
	   // }
	   // Second Approach
	   f(n){
	       if(s[i]=='0') zero++;
	       else one++;
	   }
	   if(one==n || zero==n) cout<<0<<e;
	   else cout<<min(x,y)<<e;
	}
	return 0;
}

// if chef can rearrange binary string then we can do then always sort or reverse sorted according to the min value of x & y
// ex s=100110 x=3 ,y=4
// we know that x is min so we sort it we get 000111 ,here the occurance of 01 is only 1 so we printed x 
// similary , it happens with y so we print the min of x and y
// for 0 case of there is no combination of 0 and 1 then answer will be 0