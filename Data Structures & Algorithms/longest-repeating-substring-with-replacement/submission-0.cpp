class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> hash1;
        int left = 0;
        int right = 0;
        int maxfreq = 0;
        int answer = 0;
        while(right < s.size())
        {
            hash1[s[right]]++;
            maxfreq = max(maxfreq, hash1[s[right]]);
            while((right - left + 1) - maxfreq > k)
            {
                hash1[s[left]]--;
                left++;
            }
            answer = max(answer, right - left + 1);
            right++;
        }
        return answer;
    }
};