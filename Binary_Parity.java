public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        String binaryBoi = Integer.toBinaryString(n);
        int ans = 0;
        for (int i = 0; i < binaryBoi.length(); i++) {
            char c = binaryBoi.charAt(i);
            if (c == '1') ans += 1;
        }
        sout(ans % 2 == 0 ? "Even" : "Odd");
    }
}

// we need to convert the given number to binary first so i used in built function to get binary of number in string and then
// traversed throught that string and added 1 to sum of binary string if current character is '1' and check the sum parity
// and printed answer accordingly