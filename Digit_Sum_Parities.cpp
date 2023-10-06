#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int digitSum(int x){
    int sum=0,temp=0;
    while(x){
        temp=x%10;
        sum+=temp;
        x/=10;
    }
    // cout<<sum<<e;
    return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int ab=digitSum(n);
	    int temp,bc;
	    bool ans1=ab%2,ans2,demo=true;
	    while(demo){
	        n++;
	        bc=digitSum(n);
	        ans2=bc%2;
	        if(ans2!=ans1){
	            temp=n;
	            demo=false;
	        }
	    }
	    cout<<temp<<e;
	}
	return 0;
}

// i have done this question using complete brute force solution, just applied what was asked in the question
// but it is not the efficient manner , we can count the number of '9' in the given number and then we can 
// check if the number of 9 are odd then we only need to add 1 to the number else we need to add 2 to n number 
// eg 99+1=100 add 1 for even 9
// eg 999+2=1001 add 2 for even 9