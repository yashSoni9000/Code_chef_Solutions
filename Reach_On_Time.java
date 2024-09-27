public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x < 30) sout("NO");
        else sout("YES");
    }
}

// after properly understanding question it asks us to print no if x is less than 30 else print yes