public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        String s;
        boolean cw=false,si=false,e=false,em=false,m=false,mh=false,h=false;
        String cakeWalk="cakewalk",simple="simple",easy="easy",easyMed="easy-medium",medium="medium",mediumHard="medium-hard",hard="hard";
        for(int i=0;i<n;i++){
            s=sc.next();
            if(s.equals(cakeWalk)) cw=true;
            else if(s.equals(simple)) si=true;
            else if(s.equals(easy)) e=true;
            else if(s.equals(easyMed)) em=true;
            else if(s.equals(medium)) m=true;
            else if(s.equals(mediumHard)) mh=true;
            else if(s.equals(hard)) h=true;
        }
        if(cw && si && e && (em || m) && (mh || h)) sout("Yes");
        else sout("No");
    }
}

// we need to check for each given string if it exists we set its flag to true else continue and at last we check if it
// satisfies the given condition in question , if yes we print yes else print no