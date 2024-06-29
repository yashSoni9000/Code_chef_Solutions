public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b, c, d;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        if ((a - c) > (b - d)) sout("Second");
        else if ((a - c) < (b - d)) sout("First");
        else sout("Any");
    }
}

// if first cost price is greater than second cost price after discount then print second else visa versa and in any other condition
// print any