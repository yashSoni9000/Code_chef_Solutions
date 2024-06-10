public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, m;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        sout((n * 2) + (m * 4));
    }
}

// for each n bike we multiply by 2 and for each m multiply by and add them to get correct answer