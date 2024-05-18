public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        boolean ans = true;
        for (int i = 0; i < n; i++) {
            int temp = sc.nextInt();
            if (temp <= 4) ans = false;
        }
        sout(ans ? "YES" : "NO");
    }
}

// for each judges score we check if any single gave score of less than 5 the answer will be no else answer will be yes