public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if (x < y) sout("REPAIR");
        else if (x > y) sout("NEW PHONE");
        else sout("ANY");
    }
}

// we need to check if the repair cost x is less than new phone cost y if true we print repair else if greater then print
// new phone else print any