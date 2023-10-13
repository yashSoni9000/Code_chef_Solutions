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
	    string s,a;
	    cin>>s>>a;
	    int ans=0,arr[26]={0};
	    f(n){
	        arr[a[i]-'a']++;
	    }
	    f(n){
	        if(s[i]==a[i]) arr[a[i]-'a']--;
	    }
	    f(26){
	        if(arr[i]!=0) ans++;
	    }
	    cout<<ans<<e;
	}
	return 0;
}

// first we find the occurrence of each char of string a i.e. the second string then we compare both string
// if they are same then we do not need to perform the operation so we remove the count from the array which store 
// the freq of each char of string and then at last we check if any of the value of array is not 0 then that many
// operations will be performed