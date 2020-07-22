class Solution {
public:
    
    int lengthOfLongestSubstring(string s) {
        auto b = s.begin();
        auto e = s.begin()+1;
        int f[260] = {0},r=0, c=1;
        vector<int> res;
        
        // if(s.length() == 1) return 1;
        if(s.length() == 0) return 0;
        
        for(auto it=s.begin(); it!=s.end(); it++){
            
            f[*it - ' ']++;
            if(f[*it - ' '] == 2) r=1;
            if(r){
                while(f[*it - ' '] == 2){
                    f[*b - ' ']--;
                    b++;
                }
            }
            res.push_back((it-b) +1);
        }
        return *max_element(res.begin(), res.end());
        
    }
};