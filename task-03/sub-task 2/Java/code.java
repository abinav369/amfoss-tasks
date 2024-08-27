import java.nio.file.Files;
import java.nio.file.Paths;
import java.io.IOException;

public class Main {
    public static void main(String[] args) {
        try {
            String content = Files.readString(Paths.get("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt"));
            Files.writeString(Paths.get("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/Java/output.txt"), content);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
