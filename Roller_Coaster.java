public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, h;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        h = sc.nextInt();
        sout(x >= h ? "YES" : "NO");
    }
}

// if x >= h print yes else print no