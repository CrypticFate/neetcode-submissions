class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count = 0;
        unordered_map<int, int> myMap;
        for(int num : nums){
            
            myMap[num] = count;
            count++;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(myMap.find(target - nums[i]) != myMap.end() && i != myMap[target - nums[i]]) 
                return {i,myMap[target - nums[i]]};
            
        }
        
    }
};
