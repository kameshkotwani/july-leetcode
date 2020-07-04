class Solution {
public:
    int nthUglyNumber(int n) 
    {
      if(n<=0) return 0;
      unsigned u[n];
      unsigned i2=0,i3=0,i5=0;
      unsigned n_2=2,n_3=3,n_5=5;
      unsigned n_u=1;
      u[0]=1;
      for(int i=1;i<n;i++)
      {
        n_u=min(n_2,min(n_3,n_5));
        u[i]=n_u;
        if(n_u==n_2)
        {
          i2+=1;
          n_2=u[i2]*2;
        }
        if(n_u==n_3)
        {
          i3+=1;
          n_3=u[i3]*3;
        }
        if(n_u==n_5)
        {
          i5+=1;
          n_5=u[i5]*5;
        }
      }
      return n_u;
      
    }
};
