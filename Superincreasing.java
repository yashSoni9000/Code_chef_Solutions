public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    long t,n,k,x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextLong();
        k=sc.nextLong();
        x=sc.nextLong();
        long num=k-1;
        // long ans=1L<<num;// not working for some reason
        long ans=(long) Math.pow(2, num);
        if(ans<=x) sout("YES");
        else sout("NO");
    }
}

// the pattern is as follows for number min for each index to be super increasing
// 1 2 4 8 16 32 62...... 
// we can observe that it is only possible if index -1  power of 2 is equal or greater then x if yes we print yes else print no