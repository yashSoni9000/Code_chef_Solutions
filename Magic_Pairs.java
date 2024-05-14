public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        // TLE
        // long size = (1 << n);
        // int ans = 0;
        // for (int mask = 1; mask < size; mask++) {
        //     int count = 0, first=0, second=0;
        //     for (int i = 0; i < n; i++) {
        //         if ((mask & (1 << i)) != 0) {
        //             count++;
        //             if (count == 1) first = i;
        //             else if (count == 2) second = i;
        //         }
        //     }
        //     if (count == 2) {
        //         if (a[first] != a[second]) ans++;
        //     }
        // }
        // sout(ans);

        // another approach (wrong answer)
        // Arrays.sort(a);
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         ans++;
        //     }
        // }
        // sout(ans);

        // another approach (wrong answer)
        long ans = (long) n * (long)(n - 1);
        sout(ans / 2 L);
    }
}

// in first approach i used bit masking to identify the binary number which has only 2 bits set and we increase the count if 
// only 2 bits are set, this worked but was too time consuming
// therefore i checked it step by step and saw that pattern that suppose there are 4 numbers
// 1 2 3 4
// its possible pairs are (((1,2) (1,3) (1,4)),((2,3),(2,4)),((3,4)))
// so total number of pairs are 6 i.e 3+2+1 for n=4
// we can observe that if n==4 then we can say that ans= sum of numbers till n-1 so we calculated n*n-1/2 for n-1 natural numbers
// sum