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
	    int a[12]={0},q,m,ans=0;
	    cin>>n;
	    f(n){
	        cin>>q>>m;
	        if(q!=9&&q!=10&&q!=11){
	            if(m>a[q]) a[q]=m;
	        }
	    }
	    f(12) ans+=a[i];
	    cout<<ans<<e;
	}
	return 0;
}

// while taking the input of question and their respective marks i check that if the question belongs to range 1 to 8 then
// we need to check that if the marks of given question is greater than assigned marks of array then we update it with
// greater marks m and at the end we calculate sum of all question weight in ans variable and print it