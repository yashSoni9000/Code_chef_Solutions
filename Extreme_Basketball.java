public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, a, b;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        int dominate = b + 10, required = dominate - a;
        if (required <= 0) sout(0);
        else sout((int) Math.ceil((double) required / 3.0));
    }
}

// i first got the value of required points to dominate then checked if alice already has that many points if yes we print 0 
// else we assume that she scores 3 points every time we output the number of 3 pointers by dividing with required number of
// points to win in dominating fashion