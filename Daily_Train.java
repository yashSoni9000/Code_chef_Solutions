public static void main(String[] args) throws java.lang.Exception
{
    // FastReader sc = new FastReader();
    FastReader sc = new FastReader();
    int t = 1, x, n;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x = sc.nextInt();
        n = sc.nextInt();
        String[] s = new String[n];
        int ans = 0;
        for (int i = 0; i < n; i++) s[i] = sc.nextLine();
        for (int i = 0; i < n; i++) {
            int fp = 0, lp = 53;
            for (int j = 0; j < 9; j++) {
                int zero = 0;
                int p1 = s[i].charAt(fp);
                int p2 = s[i].charAt(fp + 1);
                int p3 = s[i].charAt(fp + 2);
                int p4 = s[i].charAt(fp + 3);
                int p5 = s[i].charAt(lp);
                int p6 = s[i].charAt(lp - 1);
                if (p1 == '0') zero++;
                if (p2 == '0') zero++;
                if (p3 == '0') zero++;
                if (p4 == '0') zero++;
                if (p5 == '0') zero++;
                if (p6 == '0') zero++;
                if (zero >= x) {
                    long temp = combination(zero, x);
                    ans += temp;
                }
                fp += 4;
                lp -= 2;
            }
        }
        sout(ans);
    }
}

// nCr formual Calculation
public static long combination(long n, long r) {
    double sum = 1;

    // Calculate the value of n choose r using the
    // binomial coefficient formula
    for (int i = 1; i <= r; i++) {
        sum = sum * (n - r + i) / i;
    }
    return (long) sum;
}

// in the given question we first need to find the number of free/vacant seats for given number of friends if seats are not 
// available then we continue else we find the possible combination from the given number of empty seats and add it to
// the result answer and print it