class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int current;
        for(int i=0;i<nums.size();i++){
            current = nums[i] ;
            for (int j=0 ; j<nums.size();j++){
                if(nums[j]==target-current && j!=i){
                    return {i,j};
                }
            }
        }
        return {};
    }
};
