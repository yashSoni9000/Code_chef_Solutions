public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, m, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        m = sc.nextInt();
        x = sc.nextInt();
        int perimeter = 2 * (n + m);
        sout(perimeter * x);
    }
}

// we need to find perimeter of given rectangle and then multiply by cost to find total cost  of wire frames