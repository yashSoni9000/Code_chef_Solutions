public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, d;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        d = sc.nextInt();
        int temp, ans = 0;
        boolean sGun = true, lGun = false;
        for (int i = 0; i < n; i++) {
            temp = sc.nextInt();
            if ((temp <= d && !sGun) || (temp > d && !lGun)) {
                ans++;
                sGun = !sGun;
                lGun = !lGun;
            }
        }
        sout(ans);
    }
}

// for each distance given to us we check if condition is less than gun range and other gun is taken we increase the count of
// switch of gun and swap the state og guns as well and at last print the min number of swaps