public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x, y;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        y = sc.nextInt();
        int sumX = 0, sumY = 0, temp;
        for (int i = 0; i < n; i++) {
            temp = sc.nextInt();
            int prodX = temp * x;
            if (prodX > y) sumY++;
            else sumX += prodX;
        }
        sumY *= y;
        sout(sumX + sumY);
    }
}

// we calculate if normal pekoball with difficulty of pekomon is greater than master ball then we should use master only
// so we increase the count of master balls and then we multiply with cost of master ball
// and print the sum of those 2 balls