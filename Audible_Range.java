public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x >= 67 && x <= 45000) sout("YES");
        else sout("NO");
    }
}

// if chef command is between 67 and 45000 then print yes else print no