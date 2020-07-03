class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) 
    {
      if(N==0) return cells;
      map<int,vector<int>> m; 
      set<vector<int>> vis;
      vis.insert(cells);
      for(int i=1;i<=14;i++)
      {
        vector<int> t(8);
        for(int j=1;j<7;j++)
        {
          if(cells[j-1]^cells[j+1]==0)
            t[j]=1;
        }
        cells=t;
        m[i]=t;
        vis.insert(t);
      }
      return m[N%14==0?14:N%14];
    }
};
