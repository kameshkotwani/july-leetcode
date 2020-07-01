class Solution {
public:
    int arrangeCoins(int n) 
    {
      if(n<=0) return 0;
      //using direct formula
      return (sqrt(8*(long long)n+1)-1)/2;
    }
};
