public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x <= 3) sout("BRONZE");
        else if (x > 3 && x <= 6) sout("SILVER");
        else sout("GOLD");
    }
}

// we need to print bronze if x is less than 4  else if less than 7 print silver else print gold