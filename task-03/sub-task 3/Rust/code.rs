use std::io;

fn main() {
    let mut input = String::new();
    println!("Enter an odd number of rows for the diamond: ");
    io::stdin().read_line(&mut input).unwrap();
    let n: usize = input.trim().parse().unwrap();

    // Upper part including the middle row
    for i in 0..=(n / 2) {
        println!(
            "{}{}",
            " ".repeat((n / 2) - i),
            "*".repeat(2 * i + 1)
        );
    }

    // Lower part (excluding the middle row)
    for i in (0..(n / 2)).rev() {
        println!(
            "{}{}",
            " ".repeat((n / 2) - i),
            "*".repeat(2 * i + 1)
        );
    }
}
