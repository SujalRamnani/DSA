class Solution {
public:
int square(int n){
    int sum=0;
    while(n!=0){
    int ld=n%10;
    sum+=ld*ld;
    n=n/10;
    }
    return sum;

}

    bool isHappy(int n) {
        set<int> st;
        while(n!=1){
            if (st.count(n)==true) return false;
            st.insert(n);
             int sum=square(n); 
              n=sum;
        }
        return true;

        
    }
};