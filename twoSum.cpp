class Solution {
// solved 17/09/2025 runtime: 128ms memory: 14.14mb
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++){
            for (int k = nums.size() - 1; k > 0; k--){
                if (nums[i]+nums[k] == target && i != k){
                    return vector<int>{i, k};
                }
        }
    }
    return {};
    }
};