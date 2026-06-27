class Solution {
public:
    int countValidSubarrays(vector<int>& arr, int x) {
        int count=0;
        int n=arr.size();
       
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=arr[j];
                long long lastdigit=sum%10;
                long long firstdigit=sum;
                while(firstdigit>=10) firstdigit/=10;
                if (firstdigit==x && lastdigit==x) count++;
            }
        }
        return count;
    }
};