class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        int j,k;
        for(int i=0;i<n;i++)
        {
          if(i!=0 && nums[i]==nums[i-1]) continue;
          j=i+1;
          k=n-1;
          while(j<k)
          {
            if(nums[i]+nums[j]+nums[k]==0)
            {
              ans.push_back({nums[i],nums[j],nums[k]});
              j++;
              while(j<k && nums[j]==nums[j-1]) j++;
            }
            else if(nums[i]+nums[j]+nums[k]<0)
            {
              j++;
            }
            else
            {
              k--;
            }
          }
        }
      return ans;
        
    }
};
