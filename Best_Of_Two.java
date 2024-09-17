public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(Math.max(x, y));
    }
}

// we need to print max of given 2 numbers