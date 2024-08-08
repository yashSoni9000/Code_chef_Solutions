public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        sout(a + b);
    }
}

// since we know time between 2 place and time between 1 and 2 place we can add the time to get the time between chef and
// the first place to get our ans