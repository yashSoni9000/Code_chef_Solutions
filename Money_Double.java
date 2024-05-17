public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int x, y;
        x = sc.nextInt();
        y = sc.nextInt();
        int temp1, temp2, ans = x;
        for (int i = 0; i < y; i++) {
            temp1 = ans * 2;
            temp2 = ans + 1000;
            if (temp1 > temp2) ans = temp1;
            else ans = temp2;
        }
        sout(ans);
    }
}

// for y years we need to check if current is double is greater or adding 1000 is greater we assign it to ans and print it