public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        int[] a = new int[4];
        int count = 0;
        for (int i = 0; i < 4; i++) a[i] = sc.nextInt();
        int bag = a[3], temp;
        for (int i = 0; i < 3; i++) {
            temp = bag - a[i];
            if (temp < a[i + 1]) {
                count++;
                bag=a[3];
            }
            else bag -= a[i];
        }
        sout(count);
    }
}

// we need to check if current box can fit in bag if yes we decrease the count of bag from initial bag and check for next bag if 
// bag still has capacity of storing next bag than we require one bag less else we increase the count of number of bags