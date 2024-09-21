public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, g, s, b;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        g = sc.nextInt();
        s = sc.nextInt();
        b = sc.nextInt();
        sout(15 - (g + s + b));
    }
}

// since chef is happy when each have 5 medals so there should be total of 15 medals and we subtract with current medals
// to get our answer