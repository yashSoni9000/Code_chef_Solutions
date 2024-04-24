public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int maxSum = 0;
        int[][] a = new int[n + 1][n + 1];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
        for (int i = 0; i < n; i++)
        {
            int l = n - i;
            for (int j = 0; j < n; j++)
            {
                int r = i, c = j, sum = 0;
                while (Math.min(r, c) < l) 
                {
                    sum += a[r][c]; // diagonal sum is done here
                    r++; // increasing diagonally
                    c++; // increasing diagonally
                }
                if (sum > maxSum) maxSum = sum; // choosing max sum
                l--;
            }
        }
        sout(maxSum);
    }
}

// in given question i used brute force to get to answer where i first take the sub matrises from n,n-1,n-2...1 and check for
// each sub matrix the diagonal sum of element and add it in sum and check if it is greater than any previous value if yes
// assing it else continue and at last print answer