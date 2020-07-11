class Solution {
public:
  
    void subset_recursion(vector<int>&nums,int index,vector<vector<int>>& result)
    {
      if(index==nums.size()-1)
      {
        result.push_back({});
        result.push_back({nums[index]});
      }
      else
      {
        subset_recursion(nums,index+1,result);
        int n=result.size();
        for(int i=0;i<n;i++)
        {
          vector<int> r=result[i];
          r.push_back(nums[index]);
          result.push_back(r);
        }
      }
    }
  
    vector<vector<int>> subsets(vector<int>& nums) 
    {
      if(nums.empty()) return {{}};
      vector<vector<int>> result;
      subset_recursion(nums,0,result);
      return result;
    }
};
