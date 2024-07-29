public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b, c;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        sout(a > b && a > c ? "ALICE" : b > c ? "BOB" : "CHARLIE");
    }
}

// we need to print name of person who has greatest number among 3 people