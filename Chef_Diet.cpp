#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int temp,protein=0,place=0;
	    bool ans=true;
	    f(n){
	        cin>>temp;
	        protein+=temp;
	        if(protein>=k) protein-=k;
	        else if(ans && protein<k){
	            ans=false;
	            place=i+1;
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<" "<<place<<e;
	}
	return 0;
}

// we take the daily purchased protein temp and add it to total protein and if that day protein is greater then k then we reduce
// k amount from that amount of protein and we also check if any where we get less protein then we need to get that specific
// first occurance of less availability of protein so we toggled ans and stored its place where it occured
// then according to our answer we printed values 