public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x < y) sout("FIRST");
        else if (x > y) sout("SECOND");
        else sout("ANY");
    }
}

// we need to print first, second and any based on which number is smaller