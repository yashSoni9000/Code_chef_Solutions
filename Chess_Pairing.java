public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int totalPlayer = 2 * n;
        x = sc.nextInt();
        int unrated = totalPlayer - x;

        if (x <= unrated) sout(0);
        else sout(x - unrated);
    }
}

// we need to find the number of unrated player, if they are more than or equal to rated player then there is no need to
// place match between 2 rated player and we print 0 else we have to print the difference between those players to get min
// number of matches between 2 rated players