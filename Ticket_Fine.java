public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, p, q;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        p = sc.nextInt();
        q = sc.nextInt();

        int diff = p - q;
        sout(x * diff);
    }
}

// we get total number of people without ticket by subtracting with ticket people from total number of people
// after that we multiply people without ticket with each ticket fine to get our total fine