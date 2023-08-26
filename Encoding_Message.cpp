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
	    string s,temp;
	    char a[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
	    int arr[26];
	    for(int i=25; i>=0; i--) arr[i] = i;
	    cin>>s;
	    for(int i=0;i<=n-2;i+=2){
	        int temp=s[i];
	        s[i]=s[i+1];
	        s[i+1]=temp;
	    }
	    f(n) s[i]=a[s[i]-'a'];
	    cout<<s<<e;
	}
	return 0;
}

// first swap in pairs then i made an array where the alphabets are reversed so when replacing the bits i simple put the 
// corresponding bit and we get the encrypted message