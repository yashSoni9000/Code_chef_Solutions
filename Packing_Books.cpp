#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(y%z==0)
        {
            y=y/z;
            cout<<y*x<<endl;
        }
        else
        {
            y=y/z+1;
            cout<<y*x<<endl;
        }
	}
	return 0;
}


// i need to observe the pattern and calculate accordingly