public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x * y >= n) sout("YES");
        else sout("NO");
    }
}

// if chef can read x pages for y days then total pages would be x * y and if that number is greater than n we print yes
// else print no
