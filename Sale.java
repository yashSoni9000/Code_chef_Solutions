public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        long[] a=new long[n];
        boolean flag=true;
        long maxi=Integer.MIN_VALUE,index=-1,ans=0,tempSum=0;
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
            ans+=(a[i]*2);
            if(ans>maxi) maxi=ans;
            ans-=a[i];
        }
        sout(maxi);
    }
}

// we first need to add twice of each sales of that day to answer and compare with max possible sum if it is greater than
// previous max sum then assign new max answer and reduce that element from sum to continue normally for furthen day sales.