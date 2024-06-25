public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        int diff = x - y;
        int profit = x / 10;
        int sum = x + profit;
        sout(sum - diff);
    }
}

// we take the difference between the pervious price and increased price to get our new profit