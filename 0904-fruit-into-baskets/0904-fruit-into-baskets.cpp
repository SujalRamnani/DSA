class Solution {
public:
    int totalFruit(vector<int>& arr) {
        //find longest subarray that has atmost 2 distinct elements
       
         unordered_map<int,int> mp;
        int low=0,high=0;
       
        int maxLen=0;int n=arr.size();
      

        while(high<n){
            mp[arr[high]]++; 
            //jab tak information galat hai tab tak low ko aage badhao window ko shrink karo
            //aur information ko thik karne ka try karo
            
            ///galat info kya hoga isme toh k distinct character wla window sahi hoga
            //toh map ka size agar k hai toh thik hai agar k se jyada hai toh vo galat information ahi
            while(mp.size()>2){
                mp[arr[low]]--;
                if (mp[arr[low]]==0) mp.erase(arr[low]);
                low++;
            } //loop tuta abb mp ka size k hai matlab information sahi hai
            if(mp.size()<=2){
                int len=high-low+1;
                maxLen = max(maxLen,len);
            }
            high++;
        }
          
        return maxLen;
        
    }
};