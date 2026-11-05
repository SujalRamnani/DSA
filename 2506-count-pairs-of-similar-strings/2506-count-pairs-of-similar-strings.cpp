class Solution {
public:
    int similarPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        unordered_map<string,int> mp;
        for(int i=0;i<arr.size();i++){
            set<char> st;
            for(int j=0;j<arr[i].size();j++){
                st.insert(arr[i][j]);
            }
            string s;
            for(auto it:st) s+=it;

            mp[s]++;

        }
        for(auto it:mp){
            int y=((it.second)*(it.second-1))/2;
            count+=y;
        }
        
        return count;
    }
};