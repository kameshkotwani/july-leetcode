class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        //let use convert the recursive method to iterative way
        vector<vector<int>> allpath;
        if(graph.size() == 0)  return allpath;
        vector<int> path;
    
        stack<int> s;
        vector<stack<int>> edges(graph.size());
        vector<int> childs(graph.size(), 0);
        s.push(0);
        while(!s.empty()){
            int p = s.top(); s.pop();
            path.push_back(p);
            if(p == graph.size() - 1){
                allpath.push_back(path);
            }
            else{
                childs[p] = graph[p].size();
                for(int c : graph[p]){
                    edges[c].push(p);
                    s.push(c);
                }
            }
            
            while(childs[p] == 0 && p != 0) 
            {
                //update its parents childs number
                int curr_father = edges[p].top();
                edges[p].pop();
                if(curr_father >= 0 && curr_father < graph.size())
                    childs[curr_father]--;
                
                path.pop_back();
                p = path.back();
            }
        }
        return allpath;
    }
};
