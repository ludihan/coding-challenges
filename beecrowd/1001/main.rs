use std::io;

fn main() -> {
    let mut buffer = String::new();
    let stdin = io::stdin();
    let mut A: i32;
    let mut B: i32;

    stdin.read_line(&mut buffer);
    stdin.read_line(&mut buffer);

    A = buffer.parse();
    B = buffer.parse();

    println!("{}", A+B);
}
