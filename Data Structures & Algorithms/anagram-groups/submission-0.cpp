class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> myMap;
        for(string word : strs){
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end());
            myMap[sorted_word].push_back(word);
        }
        vector<vector<string>> result;
        for(auto const& pair : myMap){
            result.push_back(pair.second);
        }
        return result;
    }
};
