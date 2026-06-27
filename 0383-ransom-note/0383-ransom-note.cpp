class Solution {
public:
    bool canConstruct(string a, string b) {
        //kya string b se hum a ko bana sakte hai agar haan toh return true varna return false
        unordered_map<char,int> mp;
        for(int i=0;i<b.length();i++) mp[b[i]]++; 
    
        for(int i=0;i<a.length();i++){
            //har character b ka bs ek baar use karna hai agar string a ka character
            //b mein nhi hai toh fir sidha false varna uske frequency ko ghate jao
            if (mp[a[i]]==0) return false; 
           else mp[a[i]]--;
        }
        return true;
        
    }
};