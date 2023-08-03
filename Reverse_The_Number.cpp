#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n,reverse=0,r;
        cin>>n;
        for(;n>0;n=n/10){
            r=n%10;
            reverse=reverse*10+r;
        }
        cout<<reverse<<endl;
    }
	return 0;
}

// in each iteration we take the last digit and add it to another number and multiply by 10 to get the reverse number