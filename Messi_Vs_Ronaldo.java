public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, a, b, x, y;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();

        int messi = (a * 2) + b;
        int ronaldo = (x * 2) + y;
        if (messi > ronaldo) sout("Messi");
        else if (messi < ronaldo) sout("Ronaldo");
        else sout("Equal");
    }
}

// we need to calculate the total score first and then compare, whosoever is greater print that name else print equal