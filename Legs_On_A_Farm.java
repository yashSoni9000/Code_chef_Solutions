public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int ans=n/4;
        if(n%4==0) sout(ans);
        else sout(ans+1);
    }
}

// we find the max possible cows if num%4 is zero then min number of animals should be all cows so we directly print n/4
// else in all other cases there always will be one extra space for one chicken so we add 1 to final answer