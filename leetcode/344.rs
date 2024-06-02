impl Solution {
    pub fn reverse_string(s: &mut Vec<char>) {
        let size = s.len() - 1;
        for i in 0..size/2  {
            s.swap(i, size - i);
        }
    }
}
