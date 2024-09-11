public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y, k;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        k = sc.nextInt();
        if (Math.abs(x - y) <= k) sout("YES");
        else sout("NO");
    }
}

// if absolute difference of x and y is less than k we print yes else print no 