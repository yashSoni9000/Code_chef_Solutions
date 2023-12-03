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
	    int temp,max=INT_MIN,min=INT_MAX;
	    bool ans=true;
	    vector<int> v;
	    cin>>n;
	    f(n){
	        cin>>temp;
	        v.push_back(temp); 
	    }
	    for(auto it:v){
	        if(max<it) max=it;
	        if(min>it) min=it;
	        if((it<max)&&(it>min)){
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"YES"<<e;
	    else cout<<"NO"<<e;
	}
	return 0;
}

// first we put the given array in vector and for each value in vector we check if this current value is max or min 
// if it is not either of them then it is not possible 
// 1 3 2
// possible cases are 
// 1
// 11 ,13
// 111 ,133
// as we can see that the min number can not be 2 after 3 has arrived so it is not possible to form array a from b