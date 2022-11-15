//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int k=0, l=0;
        while(k<r && l<c)
        {
            //col is changing and row constant
            //left to right
            for(int i=l; i<c; i++)
                ans.push_back(matrix[k][i]);
            k++;
            //row changing col const
            //up to down
            for(int i=k;i<r;i++)
                ans.push_back(matrix[i][c-1]);
            c--;
            
            //if all row not visited
            if(k<r)
            {
                //right to left- col change row same
                for(int i=c-1; i>=l;i--)
                    ans.push_back(matrix[r-1][i]);
                r--;
            }
            if(l<c)
            {
                //down to up- col same row change
                for(int i=r-1;i>=k;i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends