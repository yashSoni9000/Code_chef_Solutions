#include <bits/stdc++.h>
using namespace std;

int main (){
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        if(n<=x) cout<<0<<endl;
        else{
            n-=x;
            if(n%4) cout<<n/4+1<<endl;
            else cout<<n/4<<endl;
        }
    }
    return 0;
}

// we first check if the no. of candies are more than number of children then we print 0 else we first find the 
// no. of candies needed and since we can get in a packet of 4 only we check if the required candies is divisible by 4
// if yes we print that req. candies by 4 else we add one to the answer of the division