public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, k;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        k = sc.nextInt();
        int[] a = new int[n];
        int ans = 0;
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        Arrays.sort(a);
        int itr=k;
        for (int i = 0; i < n; i++) {
            if (a[i] <= 3 && itr>0){
                ans += (7 - a[i]);
                itr--;
            }
            else ans += a[i];
        }
        sout(ans);
    }
}

// we need to sort the given array and since we can perform k times optimal operation we will only check if number is less
// then 4 or not as anything above 4 will result in less sum therefore we check for 3 condition and add opposite 
// number of that dice and add it to final sum