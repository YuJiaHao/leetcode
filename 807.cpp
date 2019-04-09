class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int temp=0;
        vector<int> maxColumns;
        vector<int> maxRows;
        for(int i=0;i<grid.size();i++ ){
            for(int j=0;j<grid[0].size();j++ ){
                if (maxColumns.size() < i+1)
                    maxColumns.push_back(grid[i][j]);
                else if(grid[i][j]>maxColumns[i])
                    maxColumns[i] = grid[i][j];
                
                if (maxRows.size() < j+1)
                    maxRows.push_back(grid[i][j]);
                else if(grid[i][j]>maxRows[j])
                    maxRows[j] = grid[i][j];
            
            }
        }
        
        for(int i=0;i<grid.size();i++ ){
            for(int j=0;j<grid[0].size();j++ ){
                temp -= grid[i][j];
                temp += (maxColumns[i]>maxRows[j])?maxRows[j]:maxColumns[i];
            }
        }
        return temp;
    }
};