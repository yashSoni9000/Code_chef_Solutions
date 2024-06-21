public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x > 0) && (y > 0) && (x == y)) sout("YES");
        else sout("NO");
    }
}

// 3 conditions we need to check that if x and y are gerater than 0 and both are equal i.e. draw then chef like it so print yes
// else print no