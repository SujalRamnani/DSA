class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        stack<int> st;
        for(int i=0;i<n;i++){
            int upcoming=arr[i];
            
            //collision kab hoga
            while(st.size()!=0 && st.top()>0 && upcoming<0){
                int sum=st.top()+upcoming;
                if (sum>0){
                    //stack ka top bada hai usko food dega bs
                    upcoming=0;
                }
                else if (sum<0){
                    //matlab upcoming ne fodd diya top ko 
                    st.pop();

                }
                else if (sum==0){
                    //dono babrabr dono pop
                    st.pop();
                    upcoming=0;

                }
            }
             if (upcoming!=0) st.push(upcoming);
             
        }
        while(st.size()!=0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};