class Solution {
public:
// unordered_map<int,int> dp;
    int fib(int n) {
        // if (n==0) return 0;
        // if (n==1) return 1;
        // if (dp.find(n)!=dp.end()) return dp[n]; //kahi ye mere dp mein hai toh nhi pehle se
        // ///agar hai toh return kardo///
        // int a1=fib(n-1);
        // int a2=fib(n-2);
        // int ans=a1+a2;
        // dp[n]=ans; //nhi hai 1st time solve horaha hai usko dp mein daaldo..isko yaad karlo
        // ///aage kabhi ayega toh return karenge////
        // return ans;




        if(n==0 || n==1) return n;
        vector<int> dp(n+1);dp[0]=0;dp[1]=1;
        for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
        return dp[n];

        
    }
};