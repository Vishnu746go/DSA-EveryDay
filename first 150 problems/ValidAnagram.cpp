class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> counttable;
        for(int i : s){
            counttable[i]++;
        }
        for(int i: t){
           counttable[i]--; 
        }
        for(auto search : counttable){
            if(search.second!=0){
                return false;
            }
            break;
        }
        return true;
    }
};