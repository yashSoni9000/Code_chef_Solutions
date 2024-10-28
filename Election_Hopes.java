public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t--> 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x >= (2 * y)) sout("YES");
        else sout("NO");
    }
}

// we need to check if double of y is less than x so we print yes else print no