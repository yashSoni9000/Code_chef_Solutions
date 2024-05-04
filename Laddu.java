public static void main(String[] args) throws java.lang.Exception
{
    Scanner sc = new Scanner(System.in);
    int t, act;
    t = sc.nextInt();
    while (t-- > 0) {
        act = sc.nextInt();
        String org = sc.next();
        int sum = 0;
        for (int i = 0; i < act; i++) {
            String type = sc.next();
            int r = 0;
            if (type.equals("CONTEST_WON")) {
                r = sc.nextInt();
                sum +=300 ;
                if(r<=20) sum+=(20-r);
            }
            else if (type.equals("BUG_FOUND")) {
                r = sc.nextInt();
                sum += r;
            }
            else if (type.equals("TOP_CONTRIBUTOR")) sum += 300;
            else if (type.equals("CONTEST_HOSTED")) sum += 50;
        }
        // System.out.println(sum);
        System.out.println(org.equals("INDIAN") ? sum / 200 : sum / 400);
    }
}

// there is one small condition which caused me many wrong answer that was if rank is greater than 20 we only have to add
// 300 and not every time 20 -r else in rest of cases we add the given point to final answer and print according to
// if user is indian or not 