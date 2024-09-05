public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(y > x ? "YES" : "NO");
    }
}

// if speed of tom is strictly greater than jerry speed then he will be able to catch jerry else he will not, therefore print
// yes and no accordingly