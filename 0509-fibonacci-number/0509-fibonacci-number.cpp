class Solution {
public:
unordered_map<int,int> dp;
    int fib(int n) {
        if (n==0) return 0;
        if (n==1) return 1;
        if (dp.find(n)!=dp.end()) return dp[n]; //kahi ye mere dp mein hai toh nhi pehle se
        ///agar hai toh return kardo///
        int a1=fib(n-1);
        int a2=fib(n-2);
        int ans=a1+a2;
        dp[n]=ans; //nhi hai 1st time solve horaha hai usko dp mein daaldo..isko yaad karlo
        ///aage kabhi ayega toh return karenge////
        return ans;

        
    }
};