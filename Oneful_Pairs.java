class Codechef
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        // write your code here
        if ((a + b) + (a * b) == 111) System.out.println("YES");
        else System.out.println("NO");
    }
}

// we need to apply what is given in question that if sum of number and multiplication of number and them adding gives 
// 111 or not, if yes print yes else print no