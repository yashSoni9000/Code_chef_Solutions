#define ll long long
#define f(end) for(int i=1;i<end;i++)
#define e '\n'
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    bool ac=true,bc=false;
	    f(1000){
	        if(ac){
	            if(i>a){
	                cout<<"Bob"<<e;
	                break;
	            }
	            else a-=i;
	        }else{
	            if(i>b){
	                cout<<"Limak"<<e;
	                break;
	            }
	            else b-=i;
	        }
            ac=!ac;
	        bc=!bc;
	    }
	}
	return 0;
}

// i used brute force to solve it like in one turn limak will eat then bob and so on 
// for this i used bool variable to switch between limak and bob at the end of each iteration 
// and checked if it is possible for the current person to eat it or not 