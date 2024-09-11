import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class DiamondPattern {
    public static void main(String[] args) throws IOException {

        Scanner scanner = new Scanner(new File("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt"));
        int n = scanner.nextInt();
        scanner.close();

        FileWriter writer = new FileWriter("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Java/output.txt");

        for (int i = 0; i <= n / 2; i++) {
            writer.write(" ".repeat((n / 2) - i) + "*".repeat(2 * i + 1) + "\n");
        }
)
        for (int i = (n / 2) - 1; i >= 0; i--) {
            writer.write(" ".repeat((n / 2) - i) + "*".repeat(2 * i + 1) + "\n");
        }

        writer.close();
    }
}
