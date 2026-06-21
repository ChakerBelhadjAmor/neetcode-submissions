class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> indices;
        vector<int> expected;
        expected.assign(heights.begin(), heights.end());
        sort(expected.begin(),expected.end());
        for(int i=0 ;i<heights.size();i++){
            if(heights[i]!=expected[i]){
                indices.push_back(i);
            }
        }
        return indices.size();
    }
};