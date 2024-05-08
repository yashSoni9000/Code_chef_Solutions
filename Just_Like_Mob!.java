public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n,m,k,x;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        m=sc.nextInt();
        k=sc.nextInt();
        x=sc.nextInt();
        int beforeLeapYear=k-1;
        int normalYearTotal=n*beforeLeapYear;
        int leapYearTotal=n+m;
        int totalDays=normalYearTotal+leapYearTotal;
        int remainder=x%totalDays;
        if(remainder<=normalYearTotal && remainder!=0) sout("NO");
        else sout("YES");
    }
}

// i first calculated the total number of normal years and just before leap year and then calculated number of days in leap year
// added them to get a full cycle of days including leap year and divided it by given number x if the remainder is less than
// or equal to the normal years total then it will fall in normal years and if its greater then it will fall in mob year