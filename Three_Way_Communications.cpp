#define ll long long
#define f(end) for(int i=0;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

double dist(int x1,int y1,int x2,int y2){
    double xsum=x2-x1;
    int ysum=y2-y1;
    xsum*=xsum;
    ysum*=ysum;
    xsum+=ysum;
    xsum=sqrt(xsum);
    return xsum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,r,x1,y1,x2,y2,x3,y3;
	cin>>t;
	while(t--)
	{
	    cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
	    double side1=dist(x1,y1,x2,y2);
	    double side2=dist(x2,y2,x3,y3);
	    double side3=dist(x1,y1,x3,y3);
	    if((side1<=r && side2<=r)||(side2<=r && side3<=r)||(side1<=r && side3<=r)) cout<<"yes"<<e;
	    else cout<<"no"<<e;
	}
	return 0;
}

// we use the distance formula to find the distance between every points given and in that at least 2 of them should be
// less than r given length so that they can communicate with each other