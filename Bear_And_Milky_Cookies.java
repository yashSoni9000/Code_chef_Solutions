public static void main(String[] args) throws java.lang.Exception
{
    Scanner sc = new Scanner(System.in);
    int t, n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n = sc.nextInt();
        String current = "";
        String prev = "";
        boolean ans = true, flag = false;
        for (int i = 0; i < n; i++) {
            current = sc.next();
            if (current.equals("cookie")) {
                if (flag) {
                    ans = false;
                }
                else flag = true;
            }
            else if (current.equals("milk") && flag) flag = false;
        }
        if (!ans) sout("NO");
        else sout(flag ? "NO" : "YES");
    }
}

// we need to check if milk comes after cookie, if so we can print yes else no but i dont wanted to store them in array so I
// used flags to check the if cookie comes after cookie then answer is false else if there is only one cookie then in these
// 2 cases our answer will be no else answer will be yes