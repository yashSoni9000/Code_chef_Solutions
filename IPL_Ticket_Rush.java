public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, m;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        sout(m >= n ? 0 : (n - m));
    }
}

// we need to check if the tickets are more than number of people then all can go so 0 are left behind else n - m will be
// the number of students who are left