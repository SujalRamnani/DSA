// class NumArray {
// public:
// vector<int> arr;
//     NumArray(vector<int>& nums) {
//         int n=nums.size();
//         arr.resize(n);
//         for(int i=0;i<n;i++) arr[i]=nums[i];

        
//     }
    
//     int sumRange(int left, int right) {
//         int sum=0;
//         for(int i=left;i<=right;i++){
//             sum+=arr[i];
//         }
//         return sum;
//     }
// };


class NumArray {
public:
vector<int> prefix;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix.resize(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        
        
        
    }
    
    int sumRange(int left, int right) {
        return left==0?prefix[right]:prefix[right]-prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */