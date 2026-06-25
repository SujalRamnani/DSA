class Solution {
public:
    int countMajoritySubarrays(vector<int>& arr, int target) {
        int n=arr.size();
       
         
        int ans = 0;

        // generate all subarrays
        for (int i = 0; i < n; i++) {
            int freq = 0;
            for (int j = i; j < n; j++) {
                if (arr[j] == target)
                    freq++;

                int len = j - i + 1;
                // if target appears more than half
                if (freq * 2 > len)
                    ans++;
            }
        }

        return ans;
    }
};