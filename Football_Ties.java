public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int x, y;
        x = sc.nextInt();
        y = sc.nextInt();

        sout(x % 3);
    }
}

// there can be max of 2 ties given the constrains which we can find by finding modulo with 3, because in case of draw both
// teams will have +1 in them so dosent matter to which we do module answer will always be same