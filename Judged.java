public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int ans = 0;
        for (int i = 0; i < 5; i++) {
            n = sc.nextInt();
            if (n == 1) ans++;
        }
        if (ans >= 4) sout("YES");
        else sout("NO");
    }
}

// when we take the input for judge's judgement we increment the count if judge like dance else continue
// and if at last, the count is greater than or equal to 4 then we print yes else print no