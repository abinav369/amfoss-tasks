use std::fs;

fn main() {
    let content = fs::read_to_string("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/input.txt")
        .expect("Failed to read input.txt");
    fs::write("/home/abinav/git/amfoss-tasks/task-03/sub-task 2/Rust/output.txt", content)
        .expect("Failed to write to output.txt");
}
