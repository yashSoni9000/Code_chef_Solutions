public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        sout((x * 4) <= 1000 ? "YES" : "NO");
    }
}

// if combined cost of all 4 friends is less than 1000 we print yes else print no