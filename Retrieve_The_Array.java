public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        long sum=0;
        long[] a=new long[n+1];
        for(int i=0;i<n;i++){
            a[i]=sc.nextLong();
            sum+=a[i];
        }
        sum/=(n+1);
        for(int i=0;i<n;i++){
            System.out.print(a[i]-sum+" ");
        }
        sout("");
    }
}

// by observation i concluded that the equations looks like this 
// 2x1+x2+x3=b[0]
// x1+2x2+x3=b[1]
// x1+x2+2x3=b[2]

// so we can add all 3 equations and get x1+x2+x3 which when divided by n+1 given us mean and we subtract that from b array
// ans print it in loop accordingly