public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        if ((x * 2) > (y * 5)) sout("Chocolate");
        else if ((x * 2) < (y * 5)) sout("Candy");
        else sout("Either");
    }
}


// if the total flavour of x is more than y print chocolate else if candy is more than print candy else print either