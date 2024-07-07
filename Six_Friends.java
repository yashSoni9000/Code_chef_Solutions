public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        int times2 = x * 3;
        int times3 = y * 2;
        sout(Math.min(times2, times3));
    }
}

// we calculate the cost of double and triple room and print min of them