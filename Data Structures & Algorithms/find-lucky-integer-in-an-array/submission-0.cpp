class Solution {
public:
    int findLucky(vector<int>& arr) {
        int currentLucky=-1;
        map<int,int> freqMap ={};
        for(auto i : arr ){
            freqMap[i]+=1;
        }
        for(auto freq :freqMap){
            if(freq.first ==freq.second && freq.first>currentLucky){
                currentLucky=freq.first;
            }
        }
    return currentLucky;
    }
};