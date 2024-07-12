public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x * 3) > y) sout("NO");
        else sout("YES");
    }
}

// prescribed day * 3 give total number of medicines required and if its more than y we print no else print yes