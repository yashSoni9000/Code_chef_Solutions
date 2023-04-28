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
	    int a,b,sumA=0,sumB=0,maxA,maxB,count=0;
	    cin>>n;
	    // first input of alice time
	    cin>>a;
	    // adding time to get total time of alice
        sumA+=a;
        // to get max among alice time
        maxA=a;
        // taking rest of the time by alice
	    f(n-1){
	        cin>>a;
	        sumA+=a;
	        if(maxA<a) maxA=a; // getting max time
	    }
	    // first input of bob time
        cin>>b;
        // adding time to get total time of alice
        sumB+=b;
        // to get max among alice tim
        maxB=b;
        f(n-1){
            cin>>b;
	        sumB+=b;
	        if(maxB<b) maxB=b; // getting max time
        }
	    
	    // subtracting max time from both players alice and bob which we had find out in each race
	    sumA-=maxA;
	    sumB-=maxB;
        
        // printed accordingly
	    if(sumA<sumB) cout<<"Alice"<<e;
	    else if(sumB<sumA) cout<<"Bob"<<e;
	    else cout<<"Draw"<<e;
	}
	return 0;
}

// well i had used a bit complicated approach but its clear to me 
// i haven't used array and solve it with the best optimization i can think of
// we need to subtract the largest time from alice and bob so as i take input i also check for max time in the given input and 
// subtracted from the total time taken by alice and bob and checked who has min time and printed accordingly