class Solution {
public:
    string longestPalindrome(string s) {
        string answer = s.substr(0, 1);
        int left, right;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            // odd
            left = i - 1;
            right = i + 1;
            bool flag = false;
            while ((left >= 0 && right < n) && s[left] == s[right]) {
                left--;
                right++;
                flag = true;
            }
            if (flag && (right - left - 1) > answer.size()) {
                answer = s.substr(left + 1, right - left - 1);
            }
            left = i;
            right = i + 1;
            flag = false;
            while ((left >= 0 && right < n) && s[left] == s[right]) {
                left--;
                right++;
                flag = true;
            }
            if (flag && (right - left - 1) > answer.size()) {
                answer = s.substr(left + 1, right - left - 1);
            }

            // ev
        }

        return answer;
    }
};