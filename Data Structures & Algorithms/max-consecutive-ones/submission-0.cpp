class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currentMax=0;
        int seq=0 ;
        for (int i=0 ; i<nums.size();i++){
            if(nums[i]==1){
                seq +=1;
            }else {
                seq=0;
            }
            if(seq>currentMax){
                currentMax = seq;
            }
        }
        return currentMax;
    }
};