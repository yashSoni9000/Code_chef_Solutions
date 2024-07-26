class Codechef
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		
		// write your code here
		if (x >= (2 * y)) System.out.println("YES");
		else System.out.println("NO");
	}
}


// if given score of alice (x) is more than atleast twice of y then we print yes else print no