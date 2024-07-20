public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, u, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        u = sc.nextInt();
        n = sc.nextInt();
        sout(u - n);
    }
}

// we are given total number and number of people those dont want chef email so we subtract these two to get our 
// desired output