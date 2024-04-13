public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t,n;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        n=sc.nextInt();
        int sumAttA=0,sumDefA=0,sumAttB=0,sumDefB=0,num;
        for(int i=0;i<n;i++){
            num=sc.nextInt();
            sumAttA+=num;
        }
        for(int i=0;i<n;i++){
            num=sc.nextInt();
            sumDefA+=num;
        }
        for(int i=0;i<n;i++){
            num=sc.nextInt();
            sumAttB+=num;
        }
        for(int i=0;i<n;i++){
            num=sc.nextInt();
            sumDefB+=num;
        }
        if((sumAttA>sumAttB)&&(sumDefA>sumDefB)) sout("A");
        else if((sumAttB>sumAttA)&&(sumDefB>sumDefA)) sout("P");
        else sout("DRAW");
    }
}

// we first add all the attack and def of both the team and check the condition given in the question and according to the 
// condition we print team name or draw