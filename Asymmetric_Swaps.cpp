#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<(2*n);i++)
        cin>>a[i];
        
        sort(a,a+(2*n));
        
        int j=n-1;
        int ans=INT_MAX,temp;
        for(int i=0;i<=n;i++)
        {
            temp=a[j]-a[i];
            if(temp<ans) ans=temp;
            j++;
        }
        cout<<ans<<endl;
	}
	return 0;
}

// this question was hard for me so i took help in this question and here is the solution i found
// we take all the input in one array and sort it
// we then take 2 pointers and keep one at start and other at mid of the combined array
// and check difference each time and print diff after traversing all the as there might be difference lower then previous
// at later part of the array