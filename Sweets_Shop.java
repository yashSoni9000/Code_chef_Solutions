public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        n = sc.nextInt();
        n *= 10;
        x -= n;
        sout(x / 20);
    }
}

// we first find the total cost of laddus which he purchased then subtract from total money to get remaining money
// and then divide that remaining money with cost of each jalebi to get our answer