public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int ans=0,one=0,zero=0;
        int[] a= new int[n];
        for(int i=0;i<n;i++) a[i]=sc.nextInt();
        for(int i=0;i<n;i++){
            if(a[i]==1) one++;
            else zero++;
        }
        sout(Math.min(one,zero));
        // for(int i=0;i<n;i+=2){
        //     if((a[i]^a[i+1])==1) ans++;
        // }
        // sout(ans);
    }
}

// we need to check min number of count of given 2 number and print it , at first i thougth we just need to print
// the number of pairs that were different i.e. 01 or 10 but this is not correct solution as we need to remove
// those 2 number after performing the operation and rest of the bits are concatinated
// ex 
// 1 1 1 0 0 0
// in this by tradition we get answer as 1 but actual answer is 3 as we will remove 10 pair after 1st operation and we 
// get 
// 1 1 0 0 
// again we perform operation we get
// 1 0
// so for last time we perform operation and print it 
// lets take one more example 
// 1 0 1 1 1 1 1 0 0 0 
// here the max pairs that can be made will be of min of count of given binary number here it is 0 so we print count of 3