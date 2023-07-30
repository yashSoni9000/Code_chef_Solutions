#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,d;
	cin>>t;
	while(t--)
	{
	    cin>>d;
	    string n;
	    cin>>n;
	    bool ans=false;
	    f(d){
	        if(n[i]=='5'|| n[i]=='0'){
	            ans=true;
	            break;
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// we take a for loop for each of the character in the given string and if any of the character is 5 or 0 then it is possible 
// to rearrange that number to a multiple of 5, for example if we have 459 so we have a 5 , we can make number 495 or 945 
// dosent matter as it is divisible by 5 so , we do not actually need to rearrange them we just need to check if therer is a
// presence of 5 or 0