public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y, z;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        z = sc.nextInt();
        double our = 0, their = 0;
        our += y * 0.5;
        their += y * 0.5;
        
        our += x;
        their += z;
        
        int sum = x + y + z;
        
        if((our > their) || (sum <3)) sout("YES");
        else sout("NO");
        
    }
}

// we first add the sum of all given respective players and then check the sum, if either of them is true print yes else print no

// this is the end of my streak, wish I had known how to properly do streaks properly :-)