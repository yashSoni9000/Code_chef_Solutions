public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        int range = x + 200;
        if ((y <= range) && (y >= x)) sout("YES");
        else sout("NO");
    }
}

// if the given y belong to range of x and x + 200 print yes else print no