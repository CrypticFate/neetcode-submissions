class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash_array[26] = {0};
        if (s.length() != t.length()) {
            return false;
        }
        for(int i=0 ; i<s.size() ; i++){
            hash_array[s[i] - 'a']++;
            hash_array[t[i] - 'a']--;
        }

        for(int i = 0 ; i<26 ; i++){
            if(hash_array[i]!=0){
                return false;
            }
            
        }
        return true;
    }
    
};
