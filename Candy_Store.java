public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            // Your code goes here
            if (x >= y) System.out.println(y);
            else System.out.println(x + ((y - x) * 2));
        }
    }
}

// if x >= y then we chef didnt sold required so he will get y rupees only
// but if he sell more than that then he will get x + diff of y-x*2 as mentioned by question