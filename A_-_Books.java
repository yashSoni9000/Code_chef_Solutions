public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int[] a=sc.readArray(n);
        int[] b=new int[n];
        for(int i=0;i<n-1;i++){
            int count=0;
            for(int j=i+1;j<n;j++){
                if(a[j]>a[i]) count++;
            }
            b[i]=count;
        }
        for(int i=0;i<n;i++) System.out.print(b[i]+" ");
        sout("");
    }
}

// used brute force to count the number greater than current numbers in loop , add them and assign to current index of b array
// there is also another approach to do it in O(n) as follows
/*
public static void main(String[] args) throws java.lang.Exception
    {
        FastReader sc = new FastReader();
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = sc.readArray(n);
            // Since the list is sorted, we can compute B directly without using a map.
            for (int i = 0; i < n; i++) {
                int countGreater = 0;
                // For each element, count how many elements are strictly greater than it.
                // Using the fact that the array is sorted, all elements strictly greater than a[i]
                // will be to its right.
                if (i < n-1 && a[i] != a[i+1]) {  // Optimization: Only compute countGreater if next element is different
                    countGreater = n - i - 1; // All elements to the right of a[i] are greater if array is sorted.
                }
                System.out.print(countGreater + " ");
            }
            System.out.println();
        }
    }
*/