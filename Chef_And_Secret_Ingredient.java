public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n, x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        x = sc.nextInt();
        boolean ans = false;
        int temp;
        for (int i = 0; i < n; i++) {
            temp = sc.nextInt();
            if (temp >= x) ans = true;
        }
        sout(ans ? "YES" : "NO");
    }
}

// since chef need atleast 1 student who has used x grams of special ingredient, we need to check if any student 
// has used atleast x grams of special ingredient, if yes we make our answer to true and print yes else print no