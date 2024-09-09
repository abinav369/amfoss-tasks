import java.util.Scanner;

public class DiamondPattern {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an odd number of rows for the diamond: ");
        int n = scanner.nextInt();
        
        // Upper part including the middle row
        for (int i = 0; i <= n / 2; i++) {
            System.out.println(" ".repeat((n / 2) - i) + "*".repeat(2 * i + 1));
        }

        // Lower part (excluding the middle row)
        for (int i = (n / 2) - 1; i >= 0; i--) {
            System.out.println(" ".repeat((n / 2) - i) + "*".repeat(2 * i + 1));
        }
    }
}
