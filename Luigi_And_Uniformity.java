public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int ans=0;
        boolean flag=true;
        long[] a= new long[n];
        long num,mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            a[i]=sc.nextLong();
            if(a[i]<mini) mini=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=mini && a[i]%mini==0){
                ans++;
            }
            else if(a[i]%mini!=0){
                flag=false;
                break;
            }
        }
        if(flag) sout(ans);
        else sout(n);
    }
}

// i used the approach where i took the min element and checked that if it is not divisible by any of the given numbers
// then it is not possible to make all equal in less than n moves in other condition we check if min number are not equal and
// it divides current number we increment the answer counter else we continue loop