class Solution {
public:

    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=0;i<m;i++){
            int a=0;int b=n-1;
            while(a<b){
                int temp=arr[i][a];
                arr[i][a]=arr[i][b];
                arr[i][b]=temp;
                a++;
                b--;
            }
        }

        ///har ek row reverse hogye abb jaha pe zero hai usko 1 kardo aur jidhar 1 hai usko 0
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (arr[i][j]==0) arr[i][j]=1;
                else if (arr[i][j]==1) arr[i][j]=0;
            }
        }
        return arr;
        
    }
};