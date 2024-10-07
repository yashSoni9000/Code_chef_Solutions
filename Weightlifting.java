public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, a, b, c, d, e, f;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        e = sc.nextInt();
        f = sc.nextInt();
        sout(Math.max(a ,b)+Math.max(c ,d)+Math.max(e ,f));
    }
}

// for ever pair of input taken we need to find max of the given pair and add to answer and print it