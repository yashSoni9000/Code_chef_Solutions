public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t = 1, h;
    // t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        h = sc.nextInt();
        if (h > 8) sout("MORE");
        else if (h == 8) sout("PERFECT");
        else sout("LESS");
    }
}


// according to question if given h is more than 8 print more, if equal to 8 print perfect else print less