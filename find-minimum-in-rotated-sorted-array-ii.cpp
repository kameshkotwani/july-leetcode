class Solution {
public:
    int findMin(vector<int>& nums) {
      if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
      return nums[0];
    }
};
