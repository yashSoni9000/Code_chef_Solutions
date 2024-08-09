public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(y / x);
    }
}

// we are given the total number of mana that chef has and to perform the special attack he needs x so to get the number of
// moves we need to divide mana required by each attack with total mana left to get our number of moves