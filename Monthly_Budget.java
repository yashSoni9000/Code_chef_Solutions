public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((y * 30) <= x) sout("YES");
        else sout("NO");
    }
}

// if we multiply daily expenses with 30 then we will get total month expenses and if those expenses are less than given money X
// then we print yes else print no