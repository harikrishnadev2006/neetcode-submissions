class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size()==0)
            return 0;
        unordered_set<char> hash1;
        hash1.insert(s[0]);
        int current_longest=1;
        int absolute_longest=1;
        int i=0;
        int j=i+1;
        while(j<s.size()){
                if (hash1.find(s[j])==hash1.end()){
                hash1.insert(s[j]);
                absolute_longest = maxim(absolute_longest, j - i + 1);
                j++;     
                }
                else{
                    hash1.erase(s[i]);
                    i++;
                }
            }
                return absolute_longest;
            }
    int maxim(int a,int b){
        if (a>b){
            return a;
        }
        else{
            return b;
        }
    }
};
