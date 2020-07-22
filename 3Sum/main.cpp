class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
           for(int j=i+1; j<n; j++){
                if (binary_search(nums.begin()+j+1, nums.end(), (nums[i]+nums[j])*-1)) {
                    vector<int> temp{nums[i],nums[j],((nums[i]+nums[j])*-1)};
                    ans.push_back(temp);
                }
            } 
        }
        // sort( ans.begin(), ans.end() );
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        return ans;
    }
};