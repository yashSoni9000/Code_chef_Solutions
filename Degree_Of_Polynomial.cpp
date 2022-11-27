#define ll long long
#define f(end) for(register int i=0,d;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,a,num;
	cin>>t;
	while(t--)
	{
        cin>>n;
        f(n)
        {
            cin>>a;
            if(a!=0) num=i;
        }
        cout<<num<<e;
	}
	return 0;
}


// we need to check if the there exist a non zero number then
// we give the index of the current iteration to our ans
// first i sloved it using array then i researched and got even
// more optimum solution 