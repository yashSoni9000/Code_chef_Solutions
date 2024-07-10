public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        k = sc.nextInt();
        sout(n - k);
    }
}

// for each inverted answer we need to find the numbers that are not scored by alice and we can do that by subtracting k from
// total marks