#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
    int num=x,temp=0,ans=0;
    while(num){
        temp=num%10;
        ans=(ans*10)+temp;
        num/=10;
    }
    if(ans==x) return true;
    else return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,l,r;
	cin>>t;
	while(t--)
	{
	    cin>>l>>r;
	    int sum=0;
	    bool ans=false;
	    for(int i=l;i<=r;i++){
	        ans=isPalindrome(i);
	        if(ans) sum+=i;
	    }
	    cout<<sum<<e;
	}
	return 0;
}

// we make loop from l to r and check for each number using normal palindrome function , if the number is palindrome
// we simply return true and add to our sum else we continue and at the end we print the sum value