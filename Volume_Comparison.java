public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, a, b, c, x;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        x = sc.nextInt();
        int cuboid = a * b * c;
        int cube = x * x * x;
        if (cuboid > cube) sout("CUBOID");
        else if (cube > cuboid) sout("CUBE");
        else sout("EQUAL");
    }
}

// we find the volume of cuboid using formula length * breadth * height and cube formula side^3 
// and compare if either of the are greater than other print that volume else print equal