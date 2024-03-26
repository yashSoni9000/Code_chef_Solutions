public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        
        long sum=0L;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum+=(long)a[i]*a[j];
            }
        }
        sout(sum);
    }
}

// we need to multiple every number with every other number to get answer but remember to typecast to add values outside
// range of integer and add it to long datatype sum and print it