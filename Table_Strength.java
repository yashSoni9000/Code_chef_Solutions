public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        Integer[] a = new Integer[n];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        Arrays.sort(a, Collections.reverseOrder());
        int maxSum = 0;
        for (int i = 0; i < n; i++) {
            int num = a[i] * (i + 1);
            if (num > maxSum) maxSum = num;
            // else break; // when applying this part gives wrong answer for some reason
        }
        sout(maxSum);
    }
}

// in the given question i tried to take my test cases such as
// 3 2 9 8 5 7
// i sorted it first cause i felt that i need to find maxinum number
// 2 3 5 7 8 9
// then takeing max number i got 9 so 9/1=9
// then taking 8 9 so take weight = 9 so we get 9/2 =4.5 which both 8 and 9 can handel easily
// i gradually increased weight to 10 ,11, 12, 13, 14, 15 ,16 at 16 i got avg= 16/2=8 which is the limit of it
// similarly i checked with 7 8 9 i had 21/3=7 so 21 is current max weight
// as soon as we go to 5 it would be 20 so that is not the max weight and print the max weight