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

        if (((a + b) == c) || ((b + c) == a) || ((c + a) == b)) sout("YES");
        else sout("NO");
    }
}

// we need to check if given 3 numbers make any such pairs so that it is equal to third one, if yes print it else print no