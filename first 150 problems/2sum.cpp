class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> set1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int anothernum = target - nums[i];
            if(set1.find(anothernum) != set1.end()){
                return {set1[anothernum] , i};
            }
            set1.insert({nums[i],i});

        }
        return {};
    }
};