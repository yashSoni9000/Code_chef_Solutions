public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        n = sc.nextInt();
        x /= 10;
        sout(x * n);
    }
}

// since there are 10 test cases we divide given x by 10 to get points for each case and then multiply by n i.e. no of
// test case chef have passed to get our answer