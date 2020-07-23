class Solution {
public:
   vector<int> singleNumber(vector<int>& nums) {
        int xy = 0;
        for(int n: nums) xy ^= n;
        xy &= -xy;
        vector<int> ans = {0, 0};
        for(int n: nums){
            if(xy & n) ans[0] ^= n;
            else ans[1] ^= n;
        }
        return ans;
    }
};
