public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        sout(a % b);
    }
}

// we use modulo operator to find remainder between 2 numbers