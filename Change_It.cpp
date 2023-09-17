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
	    int temp,count=0,a[101]={0};
	    f(n){
	        cin>>temp;
	        a[temp]++;
	    }
	    sort(a,a+101);
	    f(100) count+=a[i];
	    cout<<count<<e;
	}
	return 0;
}

// suppose we are given sequence :
// 2 4 2 5 7 6 8 5 3 2  
// we will conver all in 2 as 2 has max freq in sequence
// now every number which is not 2 will eventuall be connected with a 2 for example: index:5 (1 indexing) which has elemnt:7
// it does not have a 2 before and after it but when the index 5 is converted to 2
// using the given operation it becomes 2 and then chain continues therefore all will be conveted to 2