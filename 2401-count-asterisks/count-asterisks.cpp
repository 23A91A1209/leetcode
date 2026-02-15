class Solution {
public:
    int countAsterisks(string s) {
         bool inside_bar = false;
    int count = 0;

    for (char c : s) {
        if (c == '|') {
            inside_bar = !inside_bar; // toggle the flag
        } else if (c == '*' && !inside_bar) {
            count++;
        }
    }
    return count;
        
        
    }
};