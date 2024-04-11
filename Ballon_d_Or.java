public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        int count = 0;
        for (int i = 0; i < n; i++) {
            int temp = sc.nextInt();
            // mul *= temp;
            if ( temp == 2) count++;
            
        }
        if(count%8==0) sout("YES");
        else sout("NO");
    }
}

// in question we need to check if given numbers can have power of 8 or not so only possible with 2 is
// 2^8, 4^8, 8^16, 16^8.... and so on we if number of count of 2 is appearing in multiple of 8 then it is possible
// to have such kind of array else it is not possible