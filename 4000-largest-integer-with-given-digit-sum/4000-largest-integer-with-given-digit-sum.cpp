class Solution {
public:
    int largestInteger(int n, int s) {
        string ans="";
        if (s==0) return 0;
        if (s>9*n) return -1;
        while(n--){
            if (s>=9){
                ans+='9';
                s-=9;

            }
            else{
                ///abb sum<9
                //jo hai vo jodd doo
                ans+=char(s+'0');
                s=0;
            }
        }
        return stoi(ans);
    }
};