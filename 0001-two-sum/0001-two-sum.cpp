class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force 방식 (직접 작성한 답) 
        // std::vector<int> output;

        // for(int i=0; i<nums.size(); i++){
        //     for(int j=0; j<nums.size(); j++){
        //         if(i != j && nums[i] + nums[j] == target){
        //             return {i, j};
        //         }
        //     }
        // }

        // return output;

        // Two-pass Hash Table 방식
        // unordered_map<int, int> hash;
        // for (int i = 0; i < nums.size(); i++) {
        //     hash[nums[i]] = i;
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     int complement = target - nums[i];
        //     if (hash.find(complement) != hash.end() && hash[complement] != i) {
        //         return {i, hash[complement]};
        //     }
        // }
        // // If no valid pair is found, return an empty vector
        // return {};

        // One-pass Hash Table 방식
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end()) {
                return {hash[complement], i};
            }
            hash[nums[i]] = i;
        }
        // Return an empty vector if no solution is found
        return {};
    }
};