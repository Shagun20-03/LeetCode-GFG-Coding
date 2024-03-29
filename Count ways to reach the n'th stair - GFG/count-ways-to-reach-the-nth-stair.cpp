//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        //mod will be used to avoid integer overflow
        int mod=1000000007;
        if(n<=1)
        return 1;
        
        int a=1, b=1, temp;
        for(int i=2;i<=n;i++) {
            temp=(a+b)%mod;
            a=b;
            b=temp;
        }
        return temp;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends