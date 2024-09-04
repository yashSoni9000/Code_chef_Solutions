public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        sout((x + (x / 2)));
    }
}

// since 1 shirt is free with 2, to make it general we would get half of what shirts you have purchased, therefore to get
// total number of shirts we add half of shirts bought to given x shirts to get our answer