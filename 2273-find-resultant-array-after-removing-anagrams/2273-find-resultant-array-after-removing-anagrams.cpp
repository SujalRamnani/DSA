class Solution {
public:
bool isAnagram(string a,string b){
    sort(a.begin(),a.end());
     sort(b.begin(),b.end());
     if (a==b) return true;
     return false;

}
    vector<string> removeAnagrams(vector<string>& arr) {
        int n=arr.size();
        vector<string> ans;
        ans.push_back(arr[0]); ///1st word toh hamehsa rahega hi//
        for(int i=1;i<n;i++){
            if (isAnagram(arr[i],ans.back())==false) ans.push_back(arr[i]);
        }
        return ans;   
    }
};