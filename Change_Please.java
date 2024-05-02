public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        x=sc.nextInt();
        int remain=100-x;
        sout((remain/10)*10);
    }
}

// in the test cases we are show that we reduce the number from 100 and divide by 10 and them multiple result by 10 to get our answer
// subtracting x from 100 will never result in negative as in constraints given never be greater than 100