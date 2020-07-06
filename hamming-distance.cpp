class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y;
      int d=0;
      while(z)
      {
        d+=1;
        z=z & (z-1);
      }
      return d;
    }
};
