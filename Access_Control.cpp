#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,n;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    string s;
	    int count=0,temp=0;
	    bool ans=true;
	    cin>>s;
	    f(n){
	        if(s[i]=='1'){
	            temp=x;
	        }else{
	            if(temp>0){
	                temp--;
	            }
	            else{
	                ans=false;
	                break;
	            }
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

//we need to check if count is greater than 0 we keep reducing it according to question asked but if the swipes are 0 at some 
// point and the the given string is not finished then we make answer as false and according to boolean answer variable we
// print yes or no