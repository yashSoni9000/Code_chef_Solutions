public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, k, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        k = sc.nextInt();
        x = sc.nextInt();
        sout(k - x);
    }
}

// initially bucked is filled x and to reach k capacity we can subtract capacity from initial water to get our answer