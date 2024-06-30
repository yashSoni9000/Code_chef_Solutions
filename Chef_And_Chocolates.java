public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int z = scanner.nextInt();
            // Your code goes here
            int five = x * 5;
            int ten = y * 10;
            int sum = five + ten;
            System.out.println(sum / z);
        }
    }
}

// we need to get the total count by multiplying x by 5 and y by 10 and adding them to get total amount
// we then need to divide sum by z to get number of chocolates