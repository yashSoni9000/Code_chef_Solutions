public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        // sout(n);
        int last = n % 10, first = n % 10;
        n /= 10;
        while (n > 0) {
            if (n / 10 == 0) first = n % 10;
            n /= 10;
        }
        sout(first + last);
    }
}

// i first took the last digit with modulo operator then while the number is greater than 0, I reduces 1 digit from right till
// the number is 0 but just before that condition i check in every condition that if next divison by 10 makes the number 0
// if yes we store the first number else continue