class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> hash1;
        unordered_map<char,int > hash2;
        if (s1.size()>s2.size()){
            return false;
        }
        int l=s1.size();
        for(int i=0;i<l;i++){
            hash1[s1[i]]+=1;
        }
        int left=0;
        int right=0;
        for(right=0;right<s2.size();right++){
            hash2[s2[right]]++;
            if (right-left+1>s1.size()){
                hash2[s2[left]]--;
                if (hash2[s2[left]] == 0){
                hash2.erase(s2[left]);}
                left++;

            }
            if(hash1==hash2){
                    return true;
                }
            
        }
        return false;
        }

    };

