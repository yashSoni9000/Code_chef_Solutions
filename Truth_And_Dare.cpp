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
	    int tr,temp;
	    cin>>tr;
	    map<int,int> mtr;
	    f(tr){
	        cin>>temp;
	        mtr[temp]++;
	    }
	    int dr;
	    cin>>dr;
	    map<int,int> mdr;
	    f(dr){
	        cin>>temp;
	        mdr[temp]++;
	    }
	    int ts;
	    cin>>ts;
	    int giveTruth[ts];
	    f(ts) cin>>giveTruth[i];
	    int ds;
	    cin>>ds;
	    int giveDare[ds];
	    f(ds) cin>>giveDare[i];
	    bool ans=true;
	    f(ts){
	        
	        if(mtr[giveTruth[i]]==0){
	            ans=false;
	            break;
	        }
	    }
	    f(ds){
	        
	        if(mdr[giveDare[i]]==0){
	            ans=false;
	            break;
	        }
	    }
	    if(ans) cout<<"yes"<<e;
	    else cout<<"no"<<e;
	}
	return 0;
}

// we store the freq of all the truth and dare than ram can perform and we iterate for shyam's tasks to check if there is any freq tasks that ram can perform
// if yes we continue and complete the loop else it breaks and print no 