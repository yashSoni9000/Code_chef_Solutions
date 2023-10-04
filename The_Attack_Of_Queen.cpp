
#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    int total=0,diagonal=0;
	    total=(n-1)*2;
	    int a=x,b=y,c=x,d=y,f=x,g=y,h=x,i=y;
	   // while((a>1&&b>1)||(c>1&&d<n)||(f<n&&g>1)||(h<n&&i<n)){
	   //     if(a>1&&b>1){
	   //         a--;
	   //         b--;
	   //         total++;
	   //     }
	   //     if(c>1&&d<n){
	   //         c--;
	   //         d++;
	   //         total++;
	   //     }
	   //     if(f<n&&g>1){
	   //         f++;
	   //         g--;
	   //         total++;
	   //     }
	   //     if(h<n&&i<n){
	   //         h++;
	   //         i++;
	   //         total++;
	   //     }
	   //}
	   // Another approach
	   diagonal=0;
	   diagonal+=min(x-1,y-1);
	   diagonal+=min(x-1,n-y);
	   diagonal+=min(n-x,y-1);
	   diagonal+=min(n-x,n-y);
	   cout<<total+diagonal<<e;
	}
	return 0;
}

//we can find the horizontal and vertical squares attacked by queen and it always be (n-1)*2
// for diagonals the 4 corner around the x,y square ,their min sum of their x,y will be the diagonal squares attacked
// by  the queen