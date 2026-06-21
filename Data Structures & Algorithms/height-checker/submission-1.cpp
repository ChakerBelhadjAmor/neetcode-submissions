class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int numOfInd=0;
        vector<int> expected;
        expected.assign(heights.begin(), heights.end());
        sort(expected.begin(),expected.end());
        for(int i=0 ;i<heights.size();i++){
            if(heights[i]!=expected[i]){
                numOfInd += 1;
            }
        }
        return numOfInd;
    }
};