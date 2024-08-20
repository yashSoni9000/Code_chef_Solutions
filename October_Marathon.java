public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x < 3) sout("GOLD");
        else if (x >= 3 && x < 6) sout("SILVER");
        else sout("BRONZE");
    }
}

// if x is less than 3 print gold else if between 3 and 6 print silver else print bronze