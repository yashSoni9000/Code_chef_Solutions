public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int temp, ans = 0;
        for (int i = 0; i < n; i++) {
            temp = sc.nextInt();
            ans += ((temp + 1) / 2);
        }
        sout(ans);
    }
}

// as we take input of each college number of student we allocate them in their respective rooms as well if number is odd then
// it would require one more room so to reduce complication i added 1 to the given number and then divided by 2 the get 
// number of room for each college and add them.