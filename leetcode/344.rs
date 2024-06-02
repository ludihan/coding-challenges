impl Solution {
    pub fn reverse_string(s: &mut Vec<char>) {
        let size = s.len();
        for i in 0..size/2  {
            s.swap(i, size - i - 1);
        }
    }
}
