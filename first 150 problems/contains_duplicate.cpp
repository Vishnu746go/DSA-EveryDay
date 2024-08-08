class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> set;
        for(auto number : nums){
            if(set[number]>0){
                return true;
            }
            set[number]++;
        }
        return false;
    }
};
