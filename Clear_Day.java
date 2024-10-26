public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, x, y;
    // t = sc.nextInt();
    while (t--> 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        y = sc.nextInt();
        sout(7 - (x + y));
    }
}

// we are give rainy and cloudy days so we can reduce them from total number of days in a week i.e. 7, therefore answer is
// 7 - (x + y)