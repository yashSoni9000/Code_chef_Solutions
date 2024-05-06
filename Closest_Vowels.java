public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    final long mod = 1000000007L;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        String s=sc.next();
        long ans=1L;
        for(int i=0;i<n;i++){
            char c=s.charAt(i);
            if(c=='c'||c=='g'||c=='l'||c=='r') ans=(ans*2)%mod;
        }
        sout(ans%mod);
    }
}

// there can be only 4 cases where there can be ambiguity in selecting nearest vowel and those are c,g,l,r , so each can have either
// previous one or next one so we have 2 options number of time the character c,g,l,r are repeated so we multiply by
// 2 each time these character is encountered , the problem which i had faced was that i was only taking mod of last answer
// instead we have to take mod each time it overflow the mod number while multiply by given number so we can keep it in 
// mod range and print last mod (although not needed).