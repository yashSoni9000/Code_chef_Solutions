public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x * 100) < (y * 10)) sout("Disposable");
        else sout("Cloth");
    }
}

// we multiply x by 100 for cost of 100 days and multiply y by 10 to get cost of cloth for 100 days and compare whosoever is 
// less print it 