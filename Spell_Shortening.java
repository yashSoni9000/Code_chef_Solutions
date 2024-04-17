public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int i=0;
        String s= sc.next();
        for(i=0;i<n-1;i++){
            if(s.charAt(i)>s.charAt(i+1)) break;
        }
        for(int j=0;j<n;j++){
            if(j!=i) System.out.print(s.charAt(j));
        }
        sout("");
    }
}

// we need to check in the given given question that if char at i is greater than char after that int the string then we
// store it in i variable and print all the char except the char at i position