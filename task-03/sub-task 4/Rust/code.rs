use std::fs::File;
use std::io::{self, Read, Write};

fn main() -> io::Result<()> {

    let mut input = String::new();
    File::open("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt")?.read_to_string(&mut input)?;
    let n: usize = input.trim().parse().unwrap();

    let mut output = File::create("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Rust/output.txt")?;

    for i in 0..=(n / 2) {
        writeln!(
            output,
            "{}{}",
            " ".repeat((n / 2) - i),
            "*".repeat(2 * i + 1)
        )?;
    }

    for i in (0..(n / 2)).rev() {
        writeln!(
            output,
            "{}{}",
            " ".repeat((n / 2) - i),
            "*".repeat(2 * i + 1)
        )?;
    }

    Ok(())
}
