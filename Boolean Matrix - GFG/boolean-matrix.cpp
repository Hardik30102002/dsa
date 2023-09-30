//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void makezero(vector<vector<int>>& matrix, int row, int col){
        for(int j=0;j<matrix[0].size();j++){
            matrix[row][j]=1;
        }
        for(int i=0;i<matrix.size();i++){
            matrix[i][col]=1;
        }
        return;
    }
    void booleanMatrix(vector<vector<int> > &matrix)
    {
         list<pair<int,int> > p;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    p.push_back({i,j});
                }
            }
        }
        while(!p.empty()){
            pair<int,int> temp=p.front();
            p.pop_front();
            int row=temp.first;
            int col=temp.second;
            makezero(matrix,row,col);
        }
        return;
 
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends