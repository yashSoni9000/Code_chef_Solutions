public static void main(String[] args) throws java.lang.Exception
{
    FastReader sc = new FastReader();
    int t;
    t = sc.nextInt();
    while (t-- > 0) {
        // Map < Integer, Integer > map = new HashMap < > ();
        double n, k;
        n = sc.nextDouble();
        k = sc.nextDouble();
        double totalPeople = k + 1;
        if (n % totalPeople == 0) sout((int) n / (int) totalPeople);
        else {
            int share = (int) n / (int) totalPeople;
            share *= k;
            sout((int) n - share);
        }
    }
}

// i used brute force approach that if bill and number of friends are divisible then we print amount of each by simply dividing
// amount by total number of people
// else we calculate the floor value of each person multiply by number of friends and then reduce it with total sum
// to get the required amount to be paid by us.