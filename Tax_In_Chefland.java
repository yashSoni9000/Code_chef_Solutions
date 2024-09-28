public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x > 100) sout(x - 10);
        else sout(x);
    }
}

// if x is greater than 100 we deduct 10 tax from total x else print x itself