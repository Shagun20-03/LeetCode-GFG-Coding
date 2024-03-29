class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp;
        int sum=0;
        
        for(auto i: s){
            mp[i]++;
        }
        for(auto i: t){
            mp[i]--;
        }
        for(auto it: mp){
            if(it.second<0){
                sum+=it.second;
            }
        }
        return abs(sum);
    }
};