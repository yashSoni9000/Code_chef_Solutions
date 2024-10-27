public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        sout((n - 1) * 3 + 4);
    }
}

// since only one was 4 leafed we add 4 leaf to answer and rest n - 1 leaves are multiplied by 3 to get 3 leafed clover and 
// add them to get our answer