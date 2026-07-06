class Solution {
public:
    int longestBeautifulSubstring(string word) {
         int n = word.length();

        int start = 0;          // current beautiful substring ka start
        int distinct = 1;       // current substring me kitne different vowels aaye
        int maxLen = 0;

        for(int i = 1; i < n; i++){

            if(word[i] == word[i-1]){
                // Same vowel, continue
            }
            else if(word[i] > word[i-1]){
                // Next vowel in order
                distinct++;
            }
            else{
                // Order break ho gaya
                start = i;
                distinct = 1;
            }

            if(distinct == 5){
                maxLen = max(maxLen, i - start + 1);
            }
        }

        return maxLen;
        
    }
};