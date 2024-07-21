public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, a, b;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        if (a > b) sout("Dom");
        else sout("Tyro");
    }
}

// if a > b then print Dom as he will say at most a times rest tyro will do as his patience level is lost