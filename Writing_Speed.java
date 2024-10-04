public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        if (x * 5 > 60) sout("NO");
        else sout("YES");
    }
}

// chef can write one page in x minutes so 5 pages in x * 5 and he as only 1 hours so if x * 5 is less than or equal to 60 print
// yes else print no