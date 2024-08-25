public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout((x + y) >= 2000 ? "YES" : "NO");
    }
}

// if sum of given 2 numbers is greater than 2000 print yes else print no, the negative is just given for confusion