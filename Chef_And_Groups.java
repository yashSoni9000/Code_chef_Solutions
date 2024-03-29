public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        // n=sc.nextInt();
        String s=sc.next();
        int group=0;
        int n=s.length();
        if(n==1){
            char c=s.charAt(0);
            if(c=='1') sout(1);
            else sout(0);
        }
        else {
            for(int i=0;i<n-1;i++){
                char c1=s.charAt(i);
                char c2=s.charAt(i+1);
                if(c1=='1'){
                    group++;
                    while(s.charAt(i+1)!='0'&&i<n-2) i++;
                }
                else if((c1=='0'&&i==n-2)&&c2=='1') group++;
            }
            sout(group);
        }
    }
}

// it took longer approch , in which i checked if given string is of 1 length then we check what we have in string if 1 we print
// directly 1 as ans else we print 0 
// if string length is greater than 1 then we check if we encounter 1 then we skip till we encounter 0 and i have added a conditon
// specially for string that end with 01 to include it in group as well